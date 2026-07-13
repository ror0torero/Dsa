class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        double max;
        int i;
        for(i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=sum/k;
        if(k==n) return avg;
        max=sum;
        i=1;
        while(i+k<=n){
            sum+=nums[i+k-1];
            sum-=nums[i-1];
            i++;
            if(sum>max) max=sum;
        }
        return max/k;
    }
};