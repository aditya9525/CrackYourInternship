/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* element(vector<int>& nums, int s, int e) {
        if(s<=e){
            int mid=s+(e-s)/2;
            TreeNode* root=new TreeNode(nums[mid]);
            root->left=element(nums, s, mid-1);
            root->right=element(nums, mid+1, e);
            return root;
        }
        return NULL;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums){
        if(nums.size()==0){
            return NULL;
        }
        return element(nums, 0, nums.size()-1);
    }
    
};
