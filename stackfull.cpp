#include<iostream>
using namespace std;
void push(int A[],int value,int n,int top)
{

    if(top>n)
        cout<<"Overflow! your stack is full";
    else
        top++;
    A[top]=value;
}
void pop(int A[],int n,int top)
{

    if(top<0)
        cout<<"underflow! your stack is empty";
    else
    {
        int x=A[top];
    top--;

    }

}
void display(int A[],int top)
{
    for(int i=0;i<top;i++)
    {
        cout<<A[i]<<"  ";
    }
}
int main()
{
    int n,i;
    cout<<"enter the size of the Array: ";
    cin>>n;
    int A[n];
    int top=n;
    cout<<"enter the input Array: ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Input Array is :[ ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"]"<<endl;

    while(1)
    {
        int choice;
        cout<<"what do you want? "<<endl<<"press 0)for exit 1)for push 2)for pop 3)for display";
        cin>>choice;
        switch(choice)
        {
        case 0:
            return 0;
            break;
            case 1:
            int value;
            cout<<"enter the data";
            cin>>value;
            push(A,value,n,top);
            top++;

            break;
            case 2:
                pop(A,n,top);
                top--;
                break;
            case 3:
                display(A,top);
                break;
            default:
                cout<<"Wrong input";
        }
    }
}
