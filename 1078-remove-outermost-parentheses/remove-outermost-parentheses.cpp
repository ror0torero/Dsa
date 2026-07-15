class Solution {
public:
    string removeOuterParentheses(string s) {
        //using count?
        int n=s.size();
        string res="";
        int count=0; //represent no. of open brackets ()
        for(int i=0;i<n;i++){
            if(s[i]=='(' && count==0) count++;
            else if(s[i]=='(' && count>0){
                res+=s[i];
                count++;
            }
            else if(s[i]==')' && count>1){//only when no.of open brackets>1 we++
                res+=s[i];
                count--;
            }
            else count--;
            // cout<<res<<endl<<count;
        }
        return res;
    }
};