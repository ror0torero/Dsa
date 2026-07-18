class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int cnt=1;
        int mx=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1) {cnt++;mx=max(mx,cnt);}
            else if(nums[i]==nums[i-1]){}
            else 
            cnt=1;
        }
        return mx;
    }
};