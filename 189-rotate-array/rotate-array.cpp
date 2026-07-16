class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k==0) return;
        int arr[k];
        for(int i=n-1;i>=n-k;i--){
            arr[n-1-i]=nums[i];
        }
        for(int i=n-1;i>=k;i--){
            nums[i]=nums[i-k];
        }
        for(int i=k-1;i>=0;i--){
            nums[k-1-i]=arr[i];
        }
    }
};