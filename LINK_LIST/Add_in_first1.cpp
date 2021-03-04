#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *next;
}*node;
node head=NULL,Curr;
void Add_in_last(int data)
{
    node newnode=new listnode;
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
    Curr=head;
    while(Curr->next!=NULL)
    {
       Curr=Curr->next;
    }
    Curr->next=newnode;

    }
}
void display()
{
    node ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    Add_in_last(10);
    Add_in_last(20);
    display();
}
