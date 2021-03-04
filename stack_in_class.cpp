#include<iostream>
using namespace std;
#define maxsize 2
class Stack
{
    int top;
    int A[maxsize];
public:
    Stack();
    void push(int x);
    void pop();
    void print();
};
Stack::Stack()
{
    top=-1;
}
void Stack::push(int x)
{
    if(top>maxsize-1)
    {
        cout<<"stack is overflow";

    }
    else
    {
        top++;
        A[top]=x;
    }
}
void Stack::pop()
{
    int x;
    if(top<1)
    {
        cout<<"stack is underflow";
    }
    else
    {
        x=A[top];
        top--;
    }
}
void Stack::print()
{
    int i;
    for(i=top;i>=0;i--)
    {
        cout<<A[i]<<" "<<endl;
    }
}

int main()
{
    Stack obj;
    obj.push(5);

    obj.push(10);
     obj.push(10);

     obj.print();
}
