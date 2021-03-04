#include<iostream>
using namespace std;
typedef struct Listnode
{
    int data;
    Listnode *next;
}*node;
node head=NULL,Current,ptr;
void AddInFirst(int data)
{
    node newnode=new Listnode;
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}
void display()
{
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    int data,choice;
    cout<<"Press 1)for Add in first press 2)for display :"<<endl;
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
            AddInFirst(data);
            break;
        case 2:
            display();
            break;
        default:
            cout<<"wrong input"<<endl;

        }

    }

}
