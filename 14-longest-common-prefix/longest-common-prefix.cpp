class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        int n=strs.size();
        if(n==1) return strs[0];
        int minlen=201;
        for(auto s:strs) minlen=min(minlen,(int)s.size());
        for(int i=0;i<minlen;i++){
           char c=strs[0][i];
           for(int j=1;j<n;j++){
                if(strs[j][i]!=c) return res;
           }
           res+=c;
        }
        return res;
        }
};