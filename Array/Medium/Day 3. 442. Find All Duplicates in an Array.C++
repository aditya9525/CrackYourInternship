class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                ans.push_back(num);
            } else {
                seen.insert(num);
            }
        }

        return ans;
    }
};
