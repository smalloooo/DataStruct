#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

#include "LinkedList.h"

class queueArray
{
public:
    queueArray(int);
    void enqueue(int x);
    int dequeue();

private:
    int* _queueArray;
    int front;
    int back;
};

#endif // QUEUEARRAY_H
