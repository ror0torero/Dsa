class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        //using binary search
        int res=0;
        for(int i=0;i<grid.size();i++){
            int low=0;
            int n=grid[0].size();
            int high=n-1;
            int mid;
            int ans=0;
            if(grid[i][high]>=0) continue;
            while(low<high){
                mid=(low+high)/2;
                if(grid[i][mid]>=0) low=mid+1;
                else {
                    high=mid;
                }
            }
            res=res+n-low;
        }
        return res;
    }
};