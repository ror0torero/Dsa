class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        int pos=0;
        int ne=1;
        for(auto it:nums){
            if(it>0){res[pos]=it; pos+=2;}
            else {res[ne]=it; ne+=2;}
        }
        return res;
    }
};