class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int prod1=1;
        sort(nums.begin(), nums.end());
        for(int i=n-1; i>=n-3; i--){
            prod1=prod1*nums[i];
        }
        int prod2=nums[0]*nums[1]*nums[n-1];
        return max(prod1, prod2);
    }
};

    
