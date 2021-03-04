#include<iostream>
using namespace std;
typedef struct Listnode
{
    int data;
    Listnode *next;
}*node;
node head=NULL,ptr,Current,dptr;
void Add(int data)
{
    node newnode=new Listnode;
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
        head=newnode;
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
void Delete()
{
    ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    dptr=ptr->next;
    ptr->next=NULL;
    delete(dptr);

}
void print()
{
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void Reverse(node head)
{
   if(head==NULL)
    return;
   Reverse(head->next);
   cout<<head->data<<" ";
}
int main()
{
    int data,choice,n;
    cout<<"Press 1)for delete in nth pos press 2)for delete press 3)for add data 4)for display :"<<endl;
    while(1)
    {
        cout<<"enter your choice :";
        cin>>choice;
        switch(choice)
        {
        case 0:
            return 0;
            break;
        case 1:
            Reverse(head);
            break;
        case 2:
            Delete();
            break;
        case 3:
            cout<<"enter the data :";
            cin>>data;
            Add(data);
            break;
        case 4:
            print();
            break;
        default:
            cout<<"wrong input"<<endl;

        }

    }

}
