class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //using map
        unordered_map<int,int> mpp;
        for(int i=0;auto it:nums){
            int diff=target-it;
            if(mpp.count(diff)) return {mpp[diff],i};
            else
            mpp[it]=i;
            i++;
        }
        return {};
    }
};