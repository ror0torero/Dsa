class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        for(auto &it:queries){
            int sum=0;
            int c=0;
            for(auto &i:nums){
                if(sum+i<=it) {sum+=i; c++;}
            }
            it=c;
        }
        return queries;
    }
};