class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_set<int> st;
        for(auto it:nums) st.insert(it);
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(st.count(i)==0) res.push_back(i);
        }
        return res;
    }
};