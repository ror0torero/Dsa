class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // Lexicographic works like we go right to left find the first digit that is smaller than the element on its right, then succesor is the smallest digit greater than pivot then reverse all elements after the pivot.
        int n=nums.size();
        //finding pivot;
        int i;
        for(i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]) break;
        }
        if (i==0) {reverse(nums.begin(),nums.end()); return;}
        i-=1;
        cout<<i<<endl;
        int pivot=nums[i];
        cout<<pivot;
        int succ=INT_MAX;
        int succi=-1;
        //finding succesor
        for(int j=n-1;j>i;j--){
            if(nums[j]>pivot)
            {
                if(nums[j]<succ){
                    succ=nums[j];
                    succi=j;
                }
            }
        }
        cout<<i<<endl<<succi;
        swap(nums[i],nums[succi]);
        reverse(nums.begin()+i+1,nums.end());
    }
};