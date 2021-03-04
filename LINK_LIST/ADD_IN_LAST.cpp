#include<iostream>
using namespace std;

typedef struct listnode
{
    int data;
    listnode *next;
}*node;
node head=NULL,Current;
void Add_in_first(int data)
{
    node newnode=new listnode;
    newnode->data=data;
    newnode->next=head;
    head=newnode;

}
void print()
{
    node ptr=head;//fst index initialize like i=0
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";//like A[i]
        ptr=ptr->next;//i++
    }
}
int main()
{
    while(true)
    {


      int data;
      cout<<"enter data: "<<endl;
      cin>>data;
      Add_in_first(data);

    print();

        }

}

