class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {

        int minSum = INT_MAX;
        vector<string> ans;

        for (int i = 0; i < list1.size(); i++) {

            auto pos = find(list2.begin(), list2.end(), list1[i]);

            if (pos != list2.end()) {

                int j = pos - list2.begin();
                int sum = i + j;

                if (sum < minSum) {
                    minSum = sum;
                    ans.clear();
                    ans.push_back(list1[i]);
                }
                else if (sum == minSum) {
                    ans.push_back(list1[i]);
                }
            }
        }

        return ans;
    }
};