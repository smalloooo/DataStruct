#ifndef STACKARRAY_H
#define STACKARRAY_H

#include "LinkedList.h"

class stackArray
{
public:
    stackArray(int arraySize);

    int top();
    int pop();
    void push(int x);

private:
    int *_stackArray;
    int _index;
};

#endif // STACKARRAY_H
