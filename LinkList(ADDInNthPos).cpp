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


void AddInNth(int data,int n)
{
    if(head==NULL)
        cout<<"wrong try !"<<endl;
    else
    {
        if(n<1)
            cout<<"invalid position!"<<endl;
        else if(n==1)
        {
            node newnode=new Listnode;
            newnode->data=data;
            newnode->next=head;
            head=newnode;
        }
        else
        {
            ptr=head;
            int k=n-2;
            ptr=head;
            while(k--)
            {
                ptr=ptr->next;
            }
            node newnode=new Listnode;
            newnode->data=data;
            newnode->next=ptr->next;
            ptr->next=newnode;
        }
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
    cout<<"Press 1)for Add in nth pos press 2)for delete press 3)for add data 4)for display :"<<endl;
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
            cout<<"enter position:";
            cin>>n;
            AddInNth(data,n);
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


