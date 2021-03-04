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

void DeleteNth(int n)
{
    if(n<1)
        cout<<"wrong pos"<<endl;
    else
        if(n==1)
    {
        ptr=head;
        head=ptr->next;
        delete(ptr);
    }
    else
    {
        ptr=head;
    int k=n-2;
    while(k--)
    {
        ptr=ptr->next;
    }
    node dptr=ptr->next;
    ptr->next=NULL;
    delete(dptr);
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
            cout<<"enter position:";
            cin>>n;
            DeleteNth(n);
            break;
        case 2:
            DeleteFromlast();
            break;
        case 3:
            cout<<"enter the data :";
            cin>>data;
            Add(data);
            break;
        case 4:
            Display();
            break;
        default:
            cout<<"wrong input"<<endl;

        }

    }

}



