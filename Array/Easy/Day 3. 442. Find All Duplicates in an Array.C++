class Solution {
public:

    //app1;
        vector<int>ans;
        // if(nums.size()==1){
        //     return {};
        // }
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;

    //app2
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
