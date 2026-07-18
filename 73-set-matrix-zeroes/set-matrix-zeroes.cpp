class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rows;
        unordered_set<int> cols;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(auto it:rows){
            for(int i=0;i<c;i++) matrix[it][i]=0;
        }
        for(auto it:cols){
            for(int i=0;i<r;i++) matrix[i][it]=0;
        }
    }
};