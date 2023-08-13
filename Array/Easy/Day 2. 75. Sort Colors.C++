
class Solution {
public:
    //approach 2
    void sortColors(vector<int>& nums) {
        int s=0;
        int m=0;
        int e=nums.size()-1; 

        while(m<=e){
            if(nums[m]==0){
                swap(nums[s], nums[m]);
                s++;
                m++;
            }
            else if(nums[m]==2){
                swap(nums[m], nums[e]);
                e--;
            }
            else{
                m++;
            }
        }
    }


    // approach 1
    // void sortColors(vector<int>& nums) {
    //     int n=nums.size();
    //     bool flag=false;
    //     for(int i=1; i<n; i++){
    //         for(int j=0; j<n-i; j++){
    //             if(nums[j]>nums[j+1]){
    //                 int temp=nums[j];
    //                 nums[j]=nums[j+1];
    //                 nums[j+1]=temp;
                    
    //             }
    //         }
    //     }
    // }

    
};
