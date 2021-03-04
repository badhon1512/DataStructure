#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    listnode *next;
}*nodeptr;
nodeptr head=NULL;
void ADD_first(int data)
{
    nodeptr newnode=new listnode;
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}
void displaY()
{
    nodeptr p=head;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>data;
       ADD_first(data);

    }
    displaY();

}
