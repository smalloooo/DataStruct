#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "listnode.h"

class LinkedList
{
public:
    LinkedList():head(NULL){}
    void printList();
    void pushFront(int x);
    void pushBack(int x);
    void deleteNode(int x);
    void clear();
    void reverse();

private:
    ListNode *head;
};

#endif // LINKEDLIST_H
