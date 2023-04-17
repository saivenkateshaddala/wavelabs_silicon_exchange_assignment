#ifndef SILICON_EXCHANGE_H
#define SILICON_EXCHANGE_H

#include<vector>

class WavelabsSiliconExchange {
    public:
        WavelabsSiliconExchange(const std::vector<int>& prices);
        int getMaxProfit();

    private:
        std::vector<int> prices;
        int n;
};
#endif
