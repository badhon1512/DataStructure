#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *next;
}*node;
node head=NULL,Curr;
void Add_data(int data)
{
    node newnode =new listnode;
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        Curr->next=newnode;
    }
    Curr=newnode;
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
void delete_from_first()
{
    node ptr=head;
    head=ptr->next;
    delete(ptr);
}
int main()
{
    Add_data(9);
    Add_data(10);
    Add_data(11);
    print();
    cout<<endl;
delete_from_first();
 print();
}
