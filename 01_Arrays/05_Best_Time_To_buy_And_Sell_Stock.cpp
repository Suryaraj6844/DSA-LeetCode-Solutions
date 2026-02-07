class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int rmax = n-1;
        int ans = 0;
        for(int i = n-2; i>=0; i--){
            if(prices[i] < prices[rmax]){
                int curr = prices[rmax] - prices[i];
                ans = max(ans,curr);
            }else if(prices[i] > prices[rmax]){
                rmax = i;
            }
        }
        return ans;
    }
};