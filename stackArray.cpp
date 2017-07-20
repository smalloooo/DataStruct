#include "stackArray.h"

stackArray::stackArray(int arraySize)
    :_index(0)
{
    _stackArray = new int[arraySize];
}

void stackArray::push(int x)
{
    cout<<"push:"<<x<<endl;
    _stackArray[_index++] = x;
}

int stackArray::pop()
{
    int res = _stackArray[--_index];
    _stackArray[_index] = 0;
    cout<<"pop:"<<res<<endl;
    return res;

}

int stackArray::top()
{
    int res = _stackArray[_index - 1];
    cout<<"pop:"<<res<<endl;
    return res;
}
