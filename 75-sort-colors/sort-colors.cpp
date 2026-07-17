class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]==0)
           {swap(nums[i],nums[j]); i++;}
            j++;
        }
        j=i;
        while(j<n){
            if(nums[j]==1)
           {swap(nums[i],nums[j]); i++;}
            j++;
        }
    }
};