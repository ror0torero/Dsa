class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //to find lower bound 
        //lower bound is Lowest index where arr[i]>=target
        int low=0;
        int high=nums.size()-1;
        int mid;
        if(target>nums[nums.size()-1]) return nums.size();
        while(low<high){
            mid=(low+high)/2;
            if(nums[mid]>=target){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};