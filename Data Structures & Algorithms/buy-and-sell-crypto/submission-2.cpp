class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy = prices[0];
        int maxprofit = 0;
        for(int i=1;i<prices.size();i++){
            int sell = prices[i];
            maxprofit = max(maxprofit,sell-minbuy);
            minbuy = min(minbuy,sell);
        }
        return maxprofit;
    }
};
