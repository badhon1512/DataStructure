#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *next;
}*node;
node head=NULL,Current;
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
        Current=head;
        while(Current->next!=NULL)
        {
            Current=Current->next;
        }
        Current->next=newnode;
    }
}
void print()
{
    node ptr=head;//its like that i=0 mention first index
    while(ptr!=0)
    {
        cout<<ptr->data<<" ";//print nodes data
        ptr=ptr->next;//and give the next node Address like i++
    }
}
int main()
{
    Add_in_last(10);
        Add_in_last(20);
    Add_in_last(30);


      print();
}

