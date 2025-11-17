int maxProfit(int* prices, int pricesSize) {
    int min_price = 1000000000; 
    int max_prof = 0;
    int i;  

    for (i = 0; i < pricesSize; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            int prof = prices[i] - min_price;
            if (prof> max_prof) {
                max_prof = prof;
            }
        }
    }

    return max_prof;
}