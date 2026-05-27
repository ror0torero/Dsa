class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==1){
            count++;
                if(count>max) max=count;
            }
            else{
                count=0;
            }
        }
        return max;
    }
};