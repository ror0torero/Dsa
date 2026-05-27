class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n =nums.size();
        int j=0;
        for(int i=0;i<n;i++) {
            if(nums[i]==target) return i;
            else if(nums[i]<target)j=i+1;
        }
        return j;
    }
};