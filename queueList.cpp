#include "queueList.h"

queueList::queueList()
    :front(NULL), back(NULL)
{

}

void queueList::enqueue(int x)
{
    ListNode* node = new ListNode(x);

    if(front == NULL && back == NULL)
    {
        front = back = node;
    }
    else
    {
        back->setNextNode(node);
        back = node;
    }
    cout<<"enqueue:"<<node->getData()<<endl;
}

int queueList::dequeue()
{
    ListNode* node = front;
    if(node == NULL)
        return -1;
    else
    {
        int res = node->getData();
        cout<<"dequeue:"<<res<<endl;
        front = front->getNextNode();
        delete node;
        node = NULL;
        return res;
    }
}
