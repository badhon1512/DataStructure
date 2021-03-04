#include<iostream>
using namespace std;
int Front=0;
int rear=0;
int i;
#define maxsize 1000
int Queue[maxsize];
void EnQueue()
{

    if(rear==maxsize)
    {
        cout<<"Queue reached max.!"<<endl;
    }

    else
    {
        int data;
        cout<<"Enter data that you Want to be Enqueue:";
        cin>>data;
        Queue[rear]=data;
    rear++;
    }


}
void DeQueue()
{
    if(Front==rear)
        cout<<"Queue is empty!!"<<endl;
    else
        Front++;
}
void Display()
{
    cout <<endl<< " The Queue is:  [ ";
    for(i=Front; i<rear; i++)
    {
        cout << Queue[i] <<" ";
    }
    cout << "]"<<endl;
}
int main()
{
    int data,choice;
    cout<<"what do you want??"<<endl;
    cout<<"Press 0) for exit"<<endl;
    cout<<"press 1)for Enqueue 2)for Dequeue 3)for Display"<<endl;
    while(1)
    {

     cout<<"Enter choice: ";
     cin>>choice;
    switch(choice)
    {
    case 0:
        return 0;
        break;
    case 1:

        EnQueue();
    break;
    case 2:
        DeQueue();
        break;
    case 3:
        Display();
        break;
        default:
            cout<<"wrong input"<<endl;
    }




    }
}
