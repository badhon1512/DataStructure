#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *nextnode;
}*node;
node top=NULL;
void push(int data)
{
    node newnode=new listnode;
    newnode->data=data;
    newnode->nextnode=top;
    top=newnode;

}
int pop()
{
    if (top==NULL)
    {
        cout<<"stack is underflow!";

    }
    else
    {
        node ptr=top;
    top=top->nextnode;
    delete(top);
    }

}
void display()
{
    node ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->nextnode;
    }
}
int main()
{
    int choice,data;
    bool f=false;
    while(!f)
    {
       cout<<"what do U want ?"<<endl<<"enter 0)for exit 1)for push 2)for pop 3)for display";
       cin>>choice;
       switch(choice)
       {
       case 0:
        return 0;
        break;
       case 1:
        cout<<"enter the data that u want to be push: ";
        cin>>data;
        push(data);
        break;
       case 2:
        pop();
        break;
       case 3:
        display();
       }
    }
}
