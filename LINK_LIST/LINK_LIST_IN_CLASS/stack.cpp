#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    listnode *next;

}*node;
node head=NULL,current;
void Add_in_first(int data)
{
    node newnode=new listnode;
    newnode->data=data;
    newnode->next=head;
    head=newnode;

}
void delete_from_last()
{
    node dptr, ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    dptr=ptr->next;
    ptr->next=NULL;
    delete dptr;

}
void delete_from_first()
{
    node ptr;
    ptr=head;
    head=ptr->next;
    delete ptr;
}
void print()
{
    node ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<< " ";
        ptr=ptr->next;
    }
}
int main()
{


    Add_in_first(5);
    Add_in_first(7);
    print();
     delete_from_last();
    print();


}
