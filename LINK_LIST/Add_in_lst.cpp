#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *next;//pointer to struct listnode
}*node;
node head=NULL;//global node head=fst node like i=0
void Add_data(int data)
{
    node Current;
    node newnode=new listnode;//dynamic memory alocation
    newnode->data=data;//data=data
    newnode->next=NULL;//next address null
    if(head==NULL)
    {
        head=newnode;//if head is null then data will set at head head=fst address  like i=0
    }
    else
    {
        Current->next=newnode;//its means that if head is full with data then compiler
    }                          //go to line 22 and current node=head thn next data add in after head
    Current=newnode;//recent node
}
void print()
{
    node ptr=head;//its like that i=0 mention first index
    while(ptr!=0)
    {
        cout<<ptr->data<<" ";//print nodes data
        ptr=ptr->next;//and give the next node Address like i++
    }
}
int main()
{
    Add_data(10);
     Add_data(20);
      Add_data(30);
      print();
}
