class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int profit=0;
        for(auto it:prices){
            mn=min(mn,it);
            profit=max(profit,it-mn);
        }
        return profit;
    }
};