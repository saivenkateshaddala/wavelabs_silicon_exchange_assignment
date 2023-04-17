#include "wavelabs_silicon_exchange.h"
#include <algorithm>

WavelabsSiliconExchange::WavelabsSiliconExchange(const std::vector<int>& prices) : prices(prices), n(prices.size()) {}

int WavelabsSiliconExchange::getMaxProfit() {
    if (n < 2) {
        return 0;
    }

    std::vector<int> maxProfitLeft(n, 0);
    int minPrice = prices[0];
    for (int i = 1; i < n; i++) {
        maxProfitLeft[i] = std::max(maxProfitLeft[i-1], prices[i] - minPrice);
        minPrice = std::min(minPrice, prices[i]);
    }

    std::vector<int> maxProfitRight(n, 0);
    int maxPrice = prices[n-1];
    for (int i = n-2; i >= 0; i--) {
        maxProfitRight[i] = std::max(maxProfitRight[i+1], maxPrice - prices[i]);
        maxPrice = std::max(maxPrice, prices[i]);
    }

    // Calculate the maximum profit from buying and selling twice
    int maxProfit = 0;
    for (int i = 0; i < n; i++) {
        maxProfit = std::max(maxProfit, maxProfitLeft[i] + maxProfitRight[i]);
    }

    return maxProfit;
}
