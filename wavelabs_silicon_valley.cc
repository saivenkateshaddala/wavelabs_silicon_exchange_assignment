#include "wavelabs_silicon_exchange.h"
#include <iostream>

int main() {
    std::vector<int> prices_month1 = {3,3,5,0,0,3,1,4};
    WavelabsSiliconExchange wse1(prices_month1);
    std::cout << "Month1 Max Profit --> " << wse1.getMaxProfit() << std::endl; // Output: 6

    std::vector<int> prices_month2 = {1,2,3,4,5};
    WavelabsSiliconExchange wse2(prices_month2);
    std::cout << "Month2 Max Profit --> " << wse2.getMaxProfit() << std::endl; // Output: 4

    std::vector<int> prices_month3 = {7,6,4,3,1};
    WavelabsSiliconExchange wse3(prices_month3);
    std::cout << "Month3 Max Profit --> " << wse3.getMaxProfit() << std::endl; // Output: 0

    return 0;
}
