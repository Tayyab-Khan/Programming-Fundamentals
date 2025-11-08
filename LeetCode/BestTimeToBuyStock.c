#include <limits.h>

int maxProfit(int* prices, int pricesSize) {
    
    int minBuyPrice = INT_MAX;
    int maxProfit = 0;
    
    for (int i = 0; i < pricesSize; i++) {
        
        int currentPrice = prices[i];
        
        if (currentPrice < minBuyPrice) {
            minBuyPrice = currentPrice;
        } else if (currentPrice - minBuyPrice > maxProfit) {
            maxProfit = currentPrice - minBuyPrice;
        }
    }
    
    return maxProfit;
}
