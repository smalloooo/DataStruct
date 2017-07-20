#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include <string>
#include <queue>
using std::cout;
using std::endl;

class BinaryTree;
class TreeNode
{
public:
    TreeNode():leftchild(0),rightchild(0),parent(0),str(""){}
    TreeNode(std::string s):leftchild(0),rightchild(0),parent(0),str(s){}
    friend class BinaryTree;

    TreeNode *leftchild;
    TreeNode *rightchild;
    TreeNode *parent;
    std::string str;
};

class BinaryTree
{
public:
    TreeNode *root;
    BinaryTree():root(0){}
    BinaryTree(TreeNode *node):root(node){}

    void Preorder(TreeNode *current);
    void Inorder(TreeNode *current);
    void Postorder(TreeNode *current);
    void Levelorder();
};

#endif // BINARYTREE_H
