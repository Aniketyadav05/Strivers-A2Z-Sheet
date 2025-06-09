class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        
        int minPrize = INT_MAX;
        for(int i =0;i<prices.size();i++){
            minPrize = min(minPrize , prices[i]);
            profit = max(profit,prices[i]-minPrize);
        }   
        return profit;
    }
};