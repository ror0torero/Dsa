class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m =matrix.size();
        int n =matrix[0].size();
        int l1=0;
        int u1=m-1;
        int m1;
        int ans=m-1;
        while(l1<u1){
            m1=(l1+u1)/2;
            if(matrix[m1][n-1]>target){
                ans=m1;
                u1=m1;
            }
            else if(matrix[m1][n-1]==target) return true;
            else{
                l1=m1+1;
            }
        } 

            int low=0;
            int high=n-1;
            int mid;
            while(low<=high){
                mid=low + (high-low)/2;
                if(matrix[ans][mid]==target) return true;
                else if(matrix[ans][mid]>target) high=mid-1;
                else low=mid+1;
        }
        return false;
    }
};