#include <iostream>
using namespace std;

#define MaxSize 100

int Queue[MaxSize];
int i;
int front = 0;
int rear = 0;
int exit_value = 1;

void EnQueue()
{
    if(rear == MaxSize){
        cout << "\tQueue reached Max" <<endl;
    }
    else {
        cout << "Enter the value to EnQueue: ";
        int value;
        cin >> value;
        cout << "\tThe value is EnQueue at position " <<rear+1 <<endl;
        Queue[rear] = value;
        rear++;
    }
}

void DeQueue()
{
    if(front == rear) {
        cout << "\tQueue is Empty" <<endl;
    }
    else {
        cout << "\tThe 1st value is Deleted" << endl;
        front++;
    }
}

void Display()
{
    cout <<endl<< " The Queue is:  [ ";
    for(i=front; i<rear; i++) {
        cout << Queue[i] <<" ";
    }
    cout << "]"<<endl;
}

int main()
{
    do{
        cout <<endl<< " 1. EnQueue \n 2. DeQueue \n 3. Display \n Others for EXIT " <<endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        if (choice==1)
            EnQueue();
        else if (choice==2)
            DeQueue();
        else if (choice==3)
            Display();
        else
            exit_value = 0;

    }
    while(exit_value);

    return 0;
}
