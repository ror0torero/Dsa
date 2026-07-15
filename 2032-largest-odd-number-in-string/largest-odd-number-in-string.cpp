class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        bool flag=false;
        int i;
        string rs;
        for(i=n-1;i>=0;i--){
            if((num[i]-'0')%2){
                flag=true;
                break;
            }   
        }
        if(flag) 
        {string rs(num.begin(),num.begin()+i+1); cout<<rs;
        return rs;}
        else
        return "";
    }
};