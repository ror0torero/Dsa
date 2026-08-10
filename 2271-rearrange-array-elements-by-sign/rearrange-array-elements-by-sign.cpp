class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res=nums;
        int pos=0;int neg=1;
        for(auto it:nums){
            if(it>0){
                res[pos]=it;
                pos+=2;
            }
            else{
                res[neg]=it;
                neg+=2;
            }
        }
        return res;
    }
};