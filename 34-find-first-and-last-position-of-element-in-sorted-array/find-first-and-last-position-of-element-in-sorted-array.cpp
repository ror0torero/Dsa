class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int mid;
        int lb=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>target) high=mid-1;
            else if(nums[mid]==target) {
                lb=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            }
        int ub=-1;
         low=0; high=n-1;
         while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>target) high=mid-1;
            else if(nums[mid]==target) {
                ub=mid;
                low=mid+1;
            }
            else{
                low=mid+1;
            }
            }
        vector <int> res={lb,ub};
        return res;
    }
};