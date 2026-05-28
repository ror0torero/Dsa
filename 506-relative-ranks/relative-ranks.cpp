class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> arr=score;
        sort(arr.begin(),arr.end(),greater<int>());
        map<int, string> mpp;
        for(int i=0;i<score.size();i++){
            if(i==0) mpp[arr[i]]="Gold Medal";
            else if(i==1) mpp[arr[i]]="Silver Medal";
            else if(i==2) mpp[arr[i]]="Bronze Medal";
            else mpp[arr[i]]= to_string(i+1);
        }
        vector<string> res;
        for(auto it:score){
            res.push_back(mpp[it]);
        }
        return res;
    }
};