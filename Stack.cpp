#include<iostream>
using namespace std;
int top=-1;
#define maxsize 1000
int Stack[1000];
void push(int data)
{
    if(top>maxsize)
        cout<<"Stack Overflow"<<endl;
    else
        top++;
    Stack[top]=data;
}
void pop()
{
    if(top<0)
        cout<<"Stack Underflow"<<endl;
    else
        top--;
}
void printStack()
{
    for(int i=top;i>=0;i--)
    {
        cout<<Stack[i]<<endl;
    }
}
int main()
{
    int choice,data;
    cout<<"what do U want ??"<<endl;
        cout<<"Press 0)for exit press 1)for push"<<endl;
        cout<<"press 2)for pop press 3)for display"<<endl;
    while(1)
    {
        cout<<"Enter Your Choice :";
        cin>>choice;
        switch(choice)
        {
        case 0:
            return 0;
            break;
        case 1:
            cout<<"Enter the data that you want to push :"<<endl;
            cin>>data;
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            printStack();
            break;
        default:
            cout<<"wrong output"<<endl;

        }
    }

}
