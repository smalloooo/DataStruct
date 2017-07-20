#include "BinaryTree.h"

void BinaryTree::Preorder(TreeNode *current)
{
    if(current != NULL)
    {
        cout<<current->str<<" ";
        Preorder(current->leftchild);
        Preorder(current->rightchild);
    }

}

void BinaryTree::Inorder(TreeNode *current)
{
    if(current != NULL)
    {
        Inorder(current->leftchild);
        cout<<current->str<<" ";
        Inorder(current->rightchild);
    }
}

void BinaryTree::Postorder(TreeNode *current)
{
    if(current != NULL)
    {
        Postorder(current->leftchild);
        Postorder(current->rightchild);
        cout<<current->str<<" ";
    }
}

void BinaryTree::Levelorder()
{
    std::queue<TreeNode*> q;
    q.push(this->root);                     // 把root作為level-order traversal之起點
                                            // 推進queue中
    while (!q.empty())                      // 若queue不是空的, 表示還有node沒有visiting
    {
        TreeNode *current = q.front();      // 取出先進入queue的node
        q.pop();
        std::cout << current->str << " ";   // 進行visiting

        if (current->leftchild != NULL)     // 若leftchild有資料, 將其推進queue
        {
            q.push(current->leftchild);
        }
        if (current->rightchild != NULL)    // 若rightchild有資料, 將其推進queue
        {
            q.push(current->rightchild);
        }
    }
}
