#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *next;
}*node;
node head=NULL,Curr;

void Add(int data)
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
void delete_in_last()
{
    node ptr=head,dptr;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    dptr=ptr->next;
    ptr->next=NULL;
//delete(dptr);
}
int main()
{
    Add(5);
    Add(6);
    Add(7);
    print();
    cout<<endl;
    delete_in_last();
    print();

}
