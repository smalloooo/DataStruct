#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>
using std::cout;
using std::endl;

class ListNode
{
private:
    int data;
    ListNode *next;

public:
    ListNode():data(0), next(NULL){}
    ListNode(int x):data(x), next(NULL){}

    int getData(){return data;}
    ListNode* getNextNode(){return next;}

    void setData(int num){data = num;}
    void setNextNode(ListNode* node){next = node;}
};

#endif // LISTNODE_H
