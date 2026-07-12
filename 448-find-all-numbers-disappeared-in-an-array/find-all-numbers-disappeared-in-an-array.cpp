class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        for(auto it:nums){
            ans[it-1]=1;
        }
        nums.clear();
        for(auto it=ans.begin();it!=ans.end();it++){
            if (*it==0) nums.push_back(it-ans.begin()+1);
        }
        return nums;
    }
};