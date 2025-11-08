#include <stdlib.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * struct TreeNode *left;
 * struct TreeNode *right;
 * };
 */

struct TreeNode* buildTree(int* nums, int start, int end) {
    if (start > end) {
        return NULL;
    }
    
    int mid = start + (end - start) / 2;
    
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = nums[mid];
    
    node->left = buildTree(nums, start, mid - 1);
    node->right = buildTree(nums, mid + 1, end);
    
    return node;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if (numsSize == 0) {
        return NULL;
    }
    return buildTree(nums, 0, numsSize - 1);
}
