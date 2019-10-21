class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        int minn = prices[0], maxx = prices[0];
        int ans = 0;
        for(int i = 1; i < prices.size(); ++i){
            if(prices[i] < minn){
                minn = prices[i];
                maxx = prices[i];
            }
            if(prices[i] >= maxx){
                maxx = prices[i];
                ans = max(ans, maxx - minn);
            }
        }
        return ans;
    }
};