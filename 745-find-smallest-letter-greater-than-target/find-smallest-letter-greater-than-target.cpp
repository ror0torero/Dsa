class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0;
        int high=letters.size()-1;
        int mid;
        if(target>=letters[high]) return letters[0];
        while(low<high){
            mid=(low+high)/2;
            if(letters[mid]>target) high=mid;
            else{
                low=mid+1;
            }
        }
        return letters[low];
    }
};