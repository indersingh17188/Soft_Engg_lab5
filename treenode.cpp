#include<iostream>
#include "treenode.h"
#include "carray.h"

TreeNode::TreeNode()
{
    item=0;
    left=NULL;
    right=NULL;
}

TreeNode::TreeNode(int value)
{
    item = value;
    left=right=NULL;
}

void TreeNode::buildTree(TreeNode* aNode)
{
    if (aNode->item < item)
    {
        if (left==NULL) left = aNode;
        else left->buildTree(aNode);
    }
    else
    {
        if (right==NULL) right = aNode;
        else right->buildTree(aNode);
    }
}

void printInOrder(TreeNode* node)
{
    if(node == NULL) return;
    else
    {
        printInOrder(node->left);
        cout << "word = " << node->item << " " << endl;
        printInOrder(node->right);
    }
}

void printPostorder(TreeNode* node)
{
    if (node == NULL) return;

    printPostorder(node->left);
    printPostorder(node->right);
    cout << "word = " << node->item << " " << endl;
}

void printPreorder(TreeNode* node)
{
    if (node == NULL) return;

    cout << "word = " << node->item << " " << endl;
    printPreorder(node->left);
    printPreorder(node->right);
}
