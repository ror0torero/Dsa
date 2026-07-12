class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end(),greater<int>());sort(s.begin(),s.end(),greater<int>());
        int m=s.size(),n=g.size(),i=0,j=0,count=0;
        while(i<m &&j<n){
            if(s[i]>=g[j]) {count++; i++;j++;}
            else j++;
        }
        return count;
    }
};