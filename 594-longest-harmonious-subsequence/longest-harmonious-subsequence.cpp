class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=0,mx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-nums[j]==1){
                mx=max(mx,i-j+1);

            }
            while(nums[i]-nums[j]>1){
                j++;
            }
        }
        return mx;
    }
};