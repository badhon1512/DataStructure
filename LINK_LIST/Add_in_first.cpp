#include<iostream>
using namespace std;

typedef struct listnode
{
    int data;
    listnode *next;
}*node;
node head=NULL,Current;
void Add_data(int data)
{
    node newnode=new listnode;
    newnode->data=data;
    newnode->next=head;
    head=newnode;

}
void print()
{
    node ptr=head;
    while(ptr!=NULL)
    {
        cout<<"-->"<<ptr->data;
        ptr=ptr->next;
    }
}




void Sort()
{
    int swapped, i;
    node ptr1;
   node lptr = NULL;


    if (head == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                swap(ptr1->data, ptr1->next->data);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}




int main()
{

     while(true)
    {


      int data;
      cout<<endl<<"enter data: "<<endl;
      cin>>data;
      Add_data(data);
       Sort();
       cout<<"Start ";

      print();

        }

}


