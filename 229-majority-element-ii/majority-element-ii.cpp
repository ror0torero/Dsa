class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        n/=3;
        vector<int> res;
        sort(nums.begin(),nums.end());
        int curr=nums[0];
        int cnt=0;
        for(auto it:nums){
            if(it==curr) cnt++;
            else{
                curr=it;
                cnt=1;
            }
            if(cnt>n) {res.push_back(it);
            cnt=INT_MIN;}
        }
        return res;
    }
};