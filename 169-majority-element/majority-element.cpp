class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num=nums[0];
        int n=nums.size();
        int cnt=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=num && cnt<=1) num=nums[i];
            else if(nums[i]!=num) cnt--;
            else{
                cnt++;
            } 
        }
        return num;
    }
};