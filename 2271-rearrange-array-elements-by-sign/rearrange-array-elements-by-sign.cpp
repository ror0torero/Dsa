class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        int j=0;
        int k=0;
        int n=nums.size();
        vector<int> res(n);
        while(k<n){
        while(i<n && nums[i]<0) i++;
        while(j<n && nums[j]>0) j++;
        res[k]=nums[i++];
        k++;
        res[k]=nums[j++];
        k++;
        }
        return res;
    }
};