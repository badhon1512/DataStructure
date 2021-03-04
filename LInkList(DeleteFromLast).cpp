#include<iostream>
using namespace std;
typedef struct Listnode
{
    int data;
    Listnode *next;
}*node;
node head=NULL,Current,ptr;
void Add(int data)
{
    node newnode=new Listnode;
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

void DeleteFromlast()
{
    node dptr;
    ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;

    }
    dptr=ptr->next;
    ptr->next=NULL;
    delete(dptr);

}
void Display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
    int data,choice;
    cout<<"Press 1)for Add in Last press 2)for delete press 3)for display :"<<endl;
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
            cout<<"enter the data :";
            cin>>data;
            Add(data);
            break;
        case 2:
           DeleteFromlast();
            break;
        case 3:
            Display();
            break;
        default:
            cout<<"wrong input"<<endl;

        }

    }

}

