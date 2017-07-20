#include <QCoreApplication>
#include "LinkedList.h"
#include "stackArray.h"
#include "stackList.h"
#include "queueArray.h"
#include "queueList.h"
#include "BinaryTree.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<"LinkedList"<<endl;
    LinkedList list;
    list.printList();
    list.deleteNode(5);
    list.pushBack(1);
    list.pushBack(2);
    list.pushBack(3);
    list.pushBack(4);
    list.pushBack(5);
    list.printList();
    list.pushFront(0);
    list.printList();
    list.reverse();
    list.printList();
    list.deleteNode(1);
    list.printList();
    list.clear();
    list.printList();

    cout<<"stack Array"<<endl;
    stackArray *myStackArray = new stackArray(10);
    myStackArray->push(1);
    myStackArray->push(2);
    myStackArray->push(3);
    myStackArray->push(4);
    myStackArray->push(5);
    myStackArray->top();
    myStackArray->pop();
    myStackArray->pop();
    myStackArray->top();

    cout<<"stack List"<<endl;
    stackList *myStackList = new stackList;
    for(int i = 0; i < 5; i++)
        myStackList->Push(i);
    myStackList->Top();
    myStackList->Pop();
    myStackList->Top();
    myStackList->Pop();
    myStackList->Top();
    myStackList->Pop();

    cout<<"=queue array="<<endl;
    queueArray *myQueueArray = new queueArray(10);
    for(int i = 0; i < 5; i++)
        myQueueArray->enqueue(i);
    myQueueArray->dequeue();
    myQueueArray->dequeue();
    myQueueArray->dequeue();

    cout<<"=queue list="<<endl;
    queueList *myQueueList = new queueList;
    for(int i = 0; i < 5; i++)
        myQueueList->enqueue(i);
    myQueueList->dequeue();
    myQueueList->dequeue();
    myQueueList->dequeue();

    cout<<"=Binary Tree="<<endl;
    // TreeNode instantiation
    TreeNode *nodeA = new TreeNode("A"); TreeNode *nodeB = new TreeNode("B");
    TreeNode *nodeC = new TreeNode("C"); TreeNode *nodeD = new TreeNode("D");
    TreeNode *nodeE = new TreeNode("E"); TreeNode *nodeF = new TreeNode("F");
    TreeNode *nodeG = new TreeNode("G"); TreeNode *nodeH = new TreeNode("H");
    TreeNode *nodeI = new TreeNode("I");

    // construct the Binary Tree
    nodeA->leftchild = nodeB; nodeA->rightchild = nodeC;
    nodeB->leftchild = nodeD; nodeB->rightchild = nodeE;
    nodeE->leftchild = nodeG; nodeE->rightchild = nodeH;
    nodeC->leftchild = nodeF; nodeF->rightchild = nodeI;

    BinaryTree T(nodeA);

    T.Preorder(T.root);
    std::cout << std::endl;
    T.Inorder(T.root);
    std::cout << std::endl;
    T.Postorder(T.root);
    std::cout << std::endl;
    T.Levelorder();
    std::cout << std::endl;


    return a.exec();
}
