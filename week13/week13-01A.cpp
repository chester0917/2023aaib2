/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* removeLeafNodes(struct TreeNode* root, int target) {
    if(root==NULL) return NULL;
    struct TreeNode* left = removeLeafNodes(root->left, target);
    struct TreeNode* right = removeLeafNodes(root->right, target);
    if(left==NULL && right==NULL && root->val==target) return NULL;

    root->left =left;
    root->right =right;
    return root;
}
