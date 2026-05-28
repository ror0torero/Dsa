class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid;
        int lr=-1,rr=-1;
        vector<int> ans;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target) {
               rr=mid;
               low=mid+1;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        low=0;
        high=nums.size()-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target) {
               lr=mid;
               high=mid-1;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        ans={lr,rr};
        return ans;
    }
};