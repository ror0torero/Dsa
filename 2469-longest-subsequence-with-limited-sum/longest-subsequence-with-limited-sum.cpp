class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        for(int i=0;i<queries.size();i++){
            if(nums[0]>queries[i]) res.push_back(0);
            else{
                int sum=0;
                int j=0;
                while(sum<queries[i] && j<nums.size()){
                    sum+=nums[j];
                    if(sum>queries[i]) break;
                    j++;
                }
                res.push_back(j);
                }
            }
        return res;
    }
};