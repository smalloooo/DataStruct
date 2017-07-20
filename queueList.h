#ifndef QUEUELIST_H
#define QUEUELIST_H

#include "listnode.h"

class queueList
{
public:
    queueList();
    void enqueue(int);
    int dequeue();

private:
    ListNode *front, *back;
};

#endif // QUEUELIST_H
