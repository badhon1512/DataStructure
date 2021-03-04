#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *nextnode;
}*node;
node fornt=NULL,rear=NULL;
void EnQueue(int data)
{
    node newnode=new listnode;
    newnode->data=data;
    newnode->next=NULL;
    rear=newnode;
    rear=rear->next;
}
void DeQueue()
{
    if()
}
