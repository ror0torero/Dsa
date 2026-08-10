class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(mpp.count(diff)){
                return {mpp[diff],i};
            }
            else
            mpp[nums[i]]=i;
        }
        return nums;
    }
    
};