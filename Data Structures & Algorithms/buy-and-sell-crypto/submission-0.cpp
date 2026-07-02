class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy[100000], maxProfit = 0, currProfit, n = prices.size();
        bestBuy[0] = INT_MAX;
        for(int i=1; i<n; i++){
            bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
        }
        for(int i=1; i<n; i++){
            currProfit = prices[i] - bestBuy[i];
            maxProfit = max(maxProfit, currProfit);
        }
        return maxProfit;
    }
};