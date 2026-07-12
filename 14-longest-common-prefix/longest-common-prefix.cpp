class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==1) return strs[0];
        string ans="";
        auto shortest_string=min_element(strs.begin(),strs.end(),[](const string& a, const string& b) { return a.length() < b.length(); });
        int shortest_length=(*shortest_string).length();
        for(int i=0;i<shortest_length;i++){
            char c=strs[0][i];
            for(auto it: strs){
                if(it[i]!=c) return ans;
            }
            ans+=c;
        }
        return ans;
    }
};