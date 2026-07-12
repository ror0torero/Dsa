class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        if(n==1) return strs[0];
        string a=strs[0],b=strs[n-1],ans="";
        int i=0;
        while(i<a.length()){
            if(a[i]==b[i]) ans+=a[i];
            else break;
            i++;
        }
        return ans;
    }
};