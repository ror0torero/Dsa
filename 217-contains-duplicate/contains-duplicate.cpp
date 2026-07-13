class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int m=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int n=nums.size();
        return m!=n;
    }
};