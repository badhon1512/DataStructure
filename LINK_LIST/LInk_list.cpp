#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    struct listnode *next;
}*node;
node Front=NULL,Rear=NULL;

void ADD(int data)
{
    node newnode=new listnode;
    newnode->data=data;
    newnode->next=NULL;
    if(Rear==NULL)
    {
       Rear=newnode;
       Rear=Rear->next;

    }


}
void delete_from_fst()
{
    node ptr=Front;
    Front=ptr->next;
    delete(ptr);

}
void display()
{
    node ptr=Rear;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
   ADD(10);
   ADD(11);
   display();
  // delete_from_fst();
    //display();
}
