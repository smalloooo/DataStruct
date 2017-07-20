#include "stackList.h"

stackList::stackList()
    :top(NULL)
{

}

void stackList::Push(int data)
{
    ListNode* node = new ListNode(data);
    node->setNextNode(top);
    top = node;
    cout<<"stackList push;"<<top->getData()<<endl;
}

int stackList::Pop()
{
    if(top == NULL)
        return -1;

    int res = 0;
    ListNode* node = top;
    res = node->getData();
    top = top->getNextNode();
    delete node;
    cout<<"stackList pop:"<<res<<endl;
    return res;
}

int stackList::Top()
{
    if(top == NULL)
        return -1;
    cout<<"stackList top:"<<top->getData()<<endl;
    return top->getData();
}
