class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int r=img.size(),col=img[0].size();
        vector<vector<int>> ans(r,vector<int>(col,0));
        for(int j=0;j<r;j++){
            int sum=0;
            int c=0;
            int i;
            for(i=0;i<col;i++){
                sum=img[j][i];
                c=1;
                if(j!=0) {sum+=img[j-1][i]; c++;}
                if(i!=0) {sum+=img[j][i-1]; c++;}
                if(i!=col-1) {sum+=img[j][i+1]; c++;}
                if(j!=r-1) {sum+=img[j+1][i];c++;}
                if(i!=0 &&j!=0) {sum+=img[j-1][i-1];c++;}
                if(i!=col-1 && j!=r-1) {sum+=img[j+1][i+1];c++;}
                if(i!=0 &&j!=r-1) {sum+=img[j+1][i-1];c++;}
                if(i!=col-1 && j!=0) {sum+=img[j-1][i+1]; c++;}
                ans[j][i]=sum/c;
            }
        }
        return ans;
    }
};