class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int largest=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>largest) largest=nums[i];
        }
       int slargest=INT_MIN;
       long tlargest=LONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>slargest && nums[i]!=largest) slargest=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>tlargest && (nums[i]!=largest && nums[i]!=slargest)) {
                tlargest=nums[i];
        }
        }
        return(tlargest==LONG_MIN)? largest:tlargest;
        }
};