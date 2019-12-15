/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

typedef struct TreeNode {
	char data;
	struct TreeNode* left;
	struct TreeNode* right;
}TREENODE, *pTreeNode;


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
pTreeNode CreateTree(void);

