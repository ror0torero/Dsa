class Solution {
public:
    int mySqrt(int x) {
        long long int a=0,b=1;
        long long int res1,res2;
        for(int i=0;i<x;i++){
            res1=a*a;
            res2=b*b;
            if(res2>x && res1<=x) break;
            else{
                a++;
                b++;
            }
        }
        return a;
    }
};