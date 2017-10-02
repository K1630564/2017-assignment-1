#ifndef TRADE_H
#define TRADE_H


#include "vector.h"
#include <iostream>
#include <iterator>
#include <algorithm>
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

    /*
    int temp = prices[0];

    for(int i = 0; i < prices.size; i++){

        if(prices[i] < temp){
            temp = prices[i];
            buyTime = distance(prices.begin(), )

        }
    }


    cout << buyTime;
    cout << sellTime;
     */

     int buyTime = distance(prices.begin(), min_element(prices.begin(), prices.end()));
     int sellTime = distance(prices.begin(), max_element(min_element(prices.begin(), prices.end()), prices.end()));

return Trade(buyTime, sellTime);



}













// Don't write any code below this line

#endif
