class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int pp=1;
        for(int i=0;i<3;i++){
            pp=pp*nums[n-1-i];
        }
        int np=pp-1;
        if(nums[0]<0 &&nums[1]<0 &&nums[n-1]>=0){
            np=nums[0]*nums[1]*nums[n-1];
        }
        return(pp>np)? pp:np;
    }
};