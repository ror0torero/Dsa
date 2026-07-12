class NumArray {
public:
    NumArray(vector<int>& nums) {
        nums1=nums;
    }
    
    int sumRange(int left, int right) {
        int sumr=accumulate(nums1.begin()+left,nums1.begin()+right+1,0);
        return sumr;
    }
private:
    vector<int>nums1;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */