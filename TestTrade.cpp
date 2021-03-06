#include "Trade.h"

#include "vector.h"
using pep::vector;

#include <iostream>
using std::cout;
using std::endl;

int main() {
    vector<int> prices{0, 0, 3, 64, 2, 0  };
    
    
    // NB this next line won't compile until you've implemented bestBuySellTime
    Trade trade = bestBuySellTime(prices);

    int retval = 1;
    
    if (trade.getBuyTime() == 0) {
        cout << "Buy time of 1 is correct\n";
    } else {
        cout << "Buy time of " << trade.getBuyTime() << " is incorrect\n";
        ++retval;
    } 
    
    
    if (trade.getSellTime() == 3) {
        cout << "Sell time of 3 is correct\n";
    } else {
        cout << "Sell time of " << trade.getSellTime() << " is incorrect\n";
        ++retval;
    }             
    
    return retval;
}
