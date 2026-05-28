class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnum=s.size();
        if(cnum==0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int k=0;
        int cookieindex=cnum-1;
        int childindex=g.size()-1;
        while(childindex>=0 && cookieindex>=0){
            if(s[cookieindex]>=g[childindex]){
                k++;
                cookieindex--;
                childindex--;
            }
            else{
                childindex--;
            }
        }
        return k;
    }
};