#ifndef TRADE_H
#define TRADE_H


#include "vector.h"
#include <iostream>
#include <iterator>
#include <algorithm>
using pep::vector;
using std::cout;


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


    int temp = 0;
    int buyTime = 0;
    int sellTime = 0;

    for(int i = 0; i < prices.size(); i++){


        for(int z = i+1; z < prices.size(); z++){

            if(prices[z] - prices[i] > temp){

                temp = prices[z] - prices[i];
                buyTime = i;
                sellTime = z;
            }
        }



    }

return Trade(buyTime, sellTime);



}













// Don't write any code below this line

#endif
