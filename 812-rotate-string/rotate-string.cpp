class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int n =s.length();
        string res="";
        for(int i=0;i<n;i++){
            res=s[n-1]+s.substr(0,n-1);
            s=res;
            if(res==goal) return true;
            else res="";
        }
        return false;
    }
};