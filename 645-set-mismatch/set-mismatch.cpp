class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(count(nums.begin(),nums.end(),i)==2) res.insert(res.begin(),i);
            if(count(nums.begin(),nums.end(),i)==0) res.push_back(i);
        }
        return res;
    }
};