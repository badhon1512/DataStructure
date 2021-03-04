#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    listnode *next;
} *nodeptr;

nodeptr head=NULL,curr;

void Add(int data)
{
    nodeptr newnode=new listnode;
    newnode->data=data;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
        curr->next=newnode;

    curr=newnode;

}
void print()
{
  nodeptr ptr=head;
  while(ptr!=NULL)
  {
      cout<<ptr->data<<" ";
      ptr=ptr->next;
  }
}
int main()
{
    while(1)
    {
        int choice;
        cout<<"what do U want? press 0)for exit 1) for add data 2)for print";
        cin>>choice;
        if(choice==0)
        {
            return 0;
        }
        else if(choice==1)
        {
            int data;
           cout<<"enter the data";
           cin>>data;
           Add(data);
        }
        else if(choice==2)
        {
            print();
        }
    }
}
