#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    listnode *next;
}*nodeptr;
nodeptr head=NULL;
void first(int data)
{
    nodeptr newnode=new listnode;
    newnode->data=data;
    newnode-next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        nodeptr curr=head;
        while(curr->next!=NULL)
        {

        }

    }


}
