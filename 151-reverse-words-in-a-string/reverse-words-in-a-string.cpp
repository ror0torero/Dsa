class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=n-1;
        string res="";
        int count=0;
        string a="";
        bool flag=false;
        while(i>=0){
            if(s[i]!=' ') {a+=s[i]; count=0; flag=false;}
            else if(s[i]==' ' && a!="") {
                reverse(a.begin(),a.end());
                res+=a;
                res+=s[i];
                flag=true;
                cout<<res<<'*'<<endl;
                a="";
                }
            i--;
        }
        if(!flag){
            reverse(a.begin(),a.end());
            res+=a;
        }
        else{
            res.resize(res.size()-1);
        }
        return res;
    }
};