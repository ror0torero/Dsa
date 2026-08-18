class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //overlap occurs when interval 2nd ele is smaller than another intervals first ele.
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int> &b){
            if(a[0]!=b[0])
            return(a[0]<b[0]);
            else{
                return (a[1]<b[1]);
            }
        });
        vector<vector<int>> res;
        int n=intervals.size();
        int i=0,j=1,m;
        bool merge=false;
        while(i<n){
            m=intervals[i][1];
            if(j<n && intervals[i][1]>=intervals[j][0]){
                merge=true;
                m=max(m,intervals[j][1]);
                j++;
                while(j<n && m>=intervals[j][0]){
                m=max(m,intervals[j][1]);
                j++;
                }
            }
            if(merge){
                vector<int> a;
                a.push_back(intervals[i][0]);
                a.push_back(m);
                res.push_back(a);
                merge=false;
                i=j;
                j=i+1;
            }
            else{
                res.push_back(intervals[i]);
                i++;
                j=i+1;
            }
            
        }
        return res;
    }
};