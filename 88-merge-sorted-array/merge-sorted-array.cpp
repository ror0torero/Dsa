class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin()+m,nums1.end());
        for(auto it:nums2){
            auto ind=lower_bound(nums1.begin(),nums1.end(),it);
            nums1.insert(ind,it);
        }
    }
};