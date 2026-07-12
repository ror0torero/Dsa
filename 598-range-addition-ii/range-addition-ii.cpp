class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0) return m*n;
        int minx=m,miny=n;
        for(auto it:ops){
            minx=min(minx,it[0]);
            miny=min(miny,it[1]);
        }
        return minx*miny;
    }
};