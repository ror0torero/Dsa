class Solution {
public:
    int arrangeCoins(int n) {
        int low=0;
        int high=n;
        long long int mid;
        long long int ans;
        while(low<=high){
            mid=(low+high)/2;
            long long int res=mid*(mid+1)/2;
            if(res<=n) {ans=mid; low=mid+1;}
            else high=mid-1;
        }
        return ans;
    }
};