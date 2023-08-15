class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int jump=0;
        int cm=0;
        int nm=0;
        if(n < 2){
            return true;
        }
        for(int i=0; i<n-1; i++){
            nm = max(nm, i+nums[i]);
            if(i==cm){
                jump++;
                cm=nm;
                if(cm >= n-1){
                    return true;
                }
            }
        }
        return false;
    }
};
