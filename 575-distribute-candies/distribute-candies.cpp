class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        sort(candyType.begin(),candyType.end());
        candyType.erase(unique(candyType.begin(),candyType.end()),candyType.end());
        int s=candyType.size();
        return min(s,n/2);
    }
};