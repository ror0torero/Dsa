class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<int> row(c,0);
        grid.push_back(row);
        grid.insert(grid.begin(),row);
        for(auto &row:grid){
            row.insert(row.begin(),0);
            row.push_back(0);
        }
        r+=2;c+=2;
        int res=0;
        for(int i=1;i<r-1;i++){
            for(int j=1;j<c-1;j++){
                if (grid[i][j] == 1) {
                if (grid[i-1][j] == 0) res++;
                if (grid[i+1][j] == 0) res++;
                if (grid[i][j-1] == 0) res++;
                if (grid[i][j+1] == 0) res++;
}
            }
        }
        return res;
    }
};