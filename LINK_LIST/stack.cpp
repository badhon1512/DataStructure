#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *next;

}*node;
node top=NULL,Curr;
void push(int data)
{
    node newnode=new listnode;
    newnode->data=data;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    if(top==NULL)
    {
        cout<<"Stack is underflow!"<<endl;
    }
    else
    {
        node ptr;
        ptr=top;
        top=ptr->next;
        delete(ptr);
    }
}
void display()
{
    node ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    int choice,data;
    while(true)
    {
        cout<<"what do u want ?"<<endl<<" press 0)for return 1)for push 2)for pop 3)for display0"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 0:
        return 0;
        break;
    case 1:
        cout<<"enter the data that u want to be push:"<<endl;
        cin>>data;
        push(data);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    default:
        cout<<"wrong input";
        break;
    }
    }

}
