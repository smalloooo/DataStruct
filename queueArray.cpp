#include "queueArray.h"

queueArray::queueArray(int arraySize)
    :front(0), back(0)
{
    _queueArray = new int[arraySize];
}

void queueArray::enqueue(int x)
{
    _queueArray[back] = x;
    back++;
    cout<<"enqueue:"<<_queueArray[back-1]<<endl;
}

int queueArray::dequeue()
{
    int res = _queueArray[front];
    front++;
    cout<<"dequeue:"<<_queueArray[front-1]<<endl;
    return res;
}
