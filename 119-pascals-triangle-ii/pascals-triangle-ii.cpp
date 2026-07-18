class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long int p=1;
        for(int c=0;c<=rowIndex;c++){
        int r=rowIndex;
        if(c==0 ||c==rowIndex)
        ans.push_back(1);
        else{
        p*=(rowIndex-c+1);
        p/=c;
        ans.push_back(p);
        }
    }
    return ans;
    }
};