class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        int low=0;
        int high=x;
        long long mid=-1,square;
        while(low<=high){
            mid=(low+high)/2;
            square=mid*mid;
            if(square>x) high=mid-1;
            else if (square==x) return mid;
            else low = mid+1;
        }
        return high;
    }
};