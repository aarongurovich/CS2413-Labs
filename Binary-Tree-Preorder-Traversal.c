/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void traversal(struct TreeNode* root, int* result, int* index) {
    if (!root)
        return;
    
    result[(*index)++] = root->val;
    traversal(root->left, result, index);
    traversal(root->right, result, index);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = malloc(100 * sizeof(int));
    int index = 0;
    traversal(root, result, &index);
    *returnSize = index;
    return result;
}
