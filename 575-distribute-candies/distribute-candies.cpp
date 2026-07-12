class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int> st;
        for(auto it:candyType){
            st.insert(it);
        }
        int s=st.size();
        return min(s,n/2);
    }
};