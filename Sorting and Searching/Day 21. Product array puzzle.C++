class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int>ans;
        long long int pdct=1;
        int zero=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                pdct*=nums[i];
            }
            else{
                zero+=1;
            }
        }
        
        for(int i=0; i<n; i++){
            if(nums[i]!=0 && zero<1){
                ans.push_back(pdct/nums[i]);
            }
            else if(nums[i]==0 && zero==1){
                ans.push_back(pdct);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};
