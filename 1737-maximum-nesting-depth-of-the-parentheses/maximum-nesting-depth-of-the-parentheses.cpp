class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int mx=0;
        for(auto it:s){
            if(it=='(') {count++; mx=max(count,mx);}
            if(it==')') {count--;}
        }
        return mx;
    }
};