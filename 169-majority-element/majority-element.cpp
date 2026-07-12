class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=nums[0];
        int count=0;
        for(auto it:nums){
            if(major==it) count++;
            else count--;
            if(count==0){major=it; count++;}
        }
        return major;
    }
};