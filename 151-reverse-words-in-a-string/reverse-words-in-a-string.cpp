class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        int left=0;
        string res="";
        while(i<n && s[i]==' '){
            left++;
            i++;
        }
        if(left==n) return "";
        i=n-1;
        int right=n-1;
        cout<<right<<endl;
        while(i>0 && s[i]==' '){
            right--;
            i--;
        }
        cout<<right<<endl;
        string t(s.begin()+left,s.begin()+right+1);
        cout<<t;
        i=right;
        int count=0;
        string a="";
        while(i>=left){
            if(s[i]!=' ') {a+=s[i]; count=0;}
            else if(count==0) {
                reverse(a.begin(),a.end());
                res+=a;
                count++; res+=s[i];
                a="";
                }
            else count++;
            i--;
        }
        reverse(a.begin(),a.end());
                res+=a;
        return res;
    }
};