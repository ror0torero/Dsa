class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ps;
        vector<int>ne;
        for(auto it:nums){
            if(it>0) ps.push_back(it);
            else ne.push_back(it);
        }
        nums.clear();
        for(int i=0;i<n/2;i++){
            nums.push_back(ps[i]);
            nums.push_back(ne[i]);
        }
        return nums;
    }
};