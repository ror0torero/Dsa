class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //for every element calculate the sum of it and the 2 elements beneath it 
        for(int i=triangle.size()-2;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};