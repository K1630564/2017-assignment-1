#ifndef TRADE_H
#define TRADE_H


#include "vector.h"
#include <iostream>
using std::cout;
using std::distance;
using pep::vector;


class Trade {
protected:
    int buyTime;
    int sellTime;

public:
    Trade(const int buyTimeIn, const int sellTimeIn)
        : buyTime(buyTimeIn), sellTime(sellTimeIn) {
    }

    int getBuyTime() const {
        return buyTime;
    }

    int getSellTime() const {
        return sellTime;
    }

};

Trade bestBuySellTime(vector<int> prices){


     int buyTime = distance(prices.begin(), min_element(prices.begin(), prices.end()));
     int sellTime = distance(prices.begin(), max_element(min_element(prices.begin(), prices.end()), prices.end()));

return Trade(buyTime, sellTime);



}













// Don't write any code below this line

#endif
