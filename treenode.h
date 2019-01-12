#ifndef TREENODE_H
#define TREENODE_H



class TreeNode {
public:
int item; // The data in this node
TreeNode *left; // Pointer to the left subtree
TreeNode *right; // Pointer to the right subtree

TreeNode(); //default constructor
TreeNode(int); //constructor with parameter used to put the data and set left & right pointer to NULL

void buildTree(TreeNode* ); //To build the tree
};

void printPreorder(TreeNode* );//a stand-alone function which traverse the tree pre-order i.e. root, left, then right.
void printPostorder(TreeNode* ); //a stand-alone function which traverse the tree post-order i.e. left, right, then root.
void printInOrder(TreeNode* ); //a stand-alone function which traverse the tree in-order i.e. left, root, then right.

#endif // TREENODE_H
