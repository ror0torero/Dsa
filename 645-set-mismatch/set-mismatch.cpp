class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int dup=0,sum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) dup=nums[i];
            sum+=nums[i];
        }
        sum-=dup;
        int miss=n*(n+1)/2 -sum;
        vector<int> ans;
        ans.push_back(dup);
        ans.push_back(miss);
        return ans;
    }
};