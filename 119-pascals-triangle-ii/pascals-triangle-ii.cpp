class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for(int c=0;c<=rowIndex;c++){
        int r=rowIndex;
        long long int p=1;
        int a=c;
        int i=1;
        while(a--){
            p*=(r--);
            p/=(i++);
        }
        ans.push_back((int)p);
    }
    return ans;
    }
};