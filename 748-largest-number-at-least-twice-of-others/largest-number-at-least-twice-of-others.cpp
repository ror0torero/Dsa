class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest =nums[0];
        int n=nums.size();
        int s=0;
        for(int i=1;i<n;i++){
            if(nums[i]>largest) {
                largest =nums[i];
                s=i;
        }
        }
        for(int i=0;i<n;i++){
            if(i==s) continue;
            if(largest<2*nums[i]) return -1;
        }
        return s;
    }
};