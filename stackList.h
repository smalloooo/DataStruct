#ifndef STACKLIST_H
#define STACKLIST_H

#include "listnode.h"

class stackList
{
public:
    stackList();

    void Push(int);
    int Pop();
    int Top();

private:
    ListNode* top;
};

#endif // STACKLIST_H
