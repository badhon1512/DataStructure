#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *next;
}*node;
node head=NULL,Current;
void Add_data(int data)
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
        Current->next=newnode;
    }
    Current=newnode;
}
void print()
{
    node ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void delete_last()
{
    node ptr=head,dptr;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    dptr=ptr->next;
    ptr->next=NULL;
    delete(ptr);

}

int main()
{
    Add_data(6);
     Add_data(7);

    delete_last();
    print();
}
