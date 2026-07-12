class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max=0;
        for(auto it:nums){
            if (it==1) count++;
            else count=0;
            if(count>max) max=count;
        }
        return max;
    }
};