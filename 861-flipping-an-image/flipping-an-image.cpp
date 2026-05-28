class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int k=image.size();
        for (int j=0;j<k;j++){
            reverse(image[j].begin(),image[j].end());
            int n=image[j].size();
            for(int i=0;i<n;i++){
                if(image[j][i]==0) image[j][i]=1;
                else image[j][i]=0;
            }
            }
            return image;
        }
};