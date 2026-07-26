class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i)
                    if(nums[j]==2*nums[i])
                    return true;
        }
        }
        return false;
    }
};