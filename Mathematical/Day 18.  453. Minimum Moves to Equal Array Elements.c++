class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=INT_MAX;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            mini=min(mini, nums[i]);
        }
        for(auto num:nums){
            ans+=num-mini;
        }
        return ans;
    }
};
