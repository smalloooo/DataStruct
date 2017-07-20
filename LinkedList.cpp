#include "LinkedList.h"

void LinkedList::printList()
{
    if(head == NULL)
    {
        cout<<"This list is empty."<<endl;
        return;
    }

    cout<<"printList:";
    ListNode *current = head;
    while(current != NULL)
    {
        cout<<current->getData()<<" ";
        current = current->getNextNode();
    }
    cout<<endl;
}

void LinkedList::pushFront(int x)
{
    cout<<"pushFront:"<<x<<endl;
    ListNode *node = new ListNode(x);
    node->setNextNode(head);
    head = node;
}

void LinkedList::pushBack(int x)
{
    cout<<"pushBack:"<<x<<endl;
    ListNode *node = new ListNode(x);
    node->setNextNode(NULL);

    ListNode *current = head;
    if(current == NULL)
    {
        head = node;
        return;
    }

    while(current->getNextNode() != NULL)
    {
        current = current->getNextNode();
    }
    current->setNextNode(node);
}

void LinkedList::deleteNode(int x)
{
    cout<<"delete:"<<x<<endl;
    ListNode *previous = NULL, *current = head;

    if(current == NULL)
    {
        cout<<"This list is empty."<<endl;
        return;
    }

    while(current->getData() != x && current != NULL)
    {
        previous = current;
        current = current->getNextNode();
    }

    if(current == NULL)
    {
        cout<<"No found "<<x<<" in this list"<<endl;
    }
    else if(current == head)
    {
        head = current->getNextNode();
        delete current;
        current = NULL;
    }
    else
    {
        previous->setNextNode(current->getNextNode());
        delete current;
        current = NULL;
    }
}

void LinkedList::clear(void)
{
    cout<<"clear"<<endl;
    ListNode *current;
    while(head != NULL)
    {
        current = head;
        head = head->getNextNode();
        cout<<"delete:"<<current->getData()<<endl;
        delete current;
    }
    current = NULL;
}

void LinkedList::reverse()
{
    cout<<"reverse"<<endl;
    if(head == NULL || head->getNextNode() == NULL)
    {
        cout<<"This list is empty or only have one node."<<endl;
        return;
    }

    ListNode *previous  = NULL,
             *current   = head,
             *preceding = head->getNextNode();

    while(preceding != NULL)
    {
        current->setNextNode(previous);
        previous = current;
        current = preceding;
        preceding = preceding->getNextNode();
    }

    current->setNextNode(previous);
    head = current;
}
