#include<iostream>
using namespace std;
typedef struct listnode
{
    string id;
    string name;
    listnode *next;
}*node;
node head=NULL,current;

void Add_first(string id,string name)
{
    node newnode=new listnode;
    newnode->id=id;
    newnode->name=name;
    newnode->next=head;
    head=newnode;

}
void Add_last(string id,string name)
{
    node newnode=new listnode;
    newnode->id=id;
    newnode->name=name;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        current->next=newnode;
    }
    current=newnode;
}
void print()
{
    node ptr=head;
    while(ptr!=NULL)
    {
         cout<<ptr->id<< " "<<ptr->name<<endl;
         ptr=ptr->next;
    }


}
int main()
{
    string id,name;

         cout<<"enter student id:"<<endl;
    getline(cin,id);
    cout<<"enter student name:"<<endl;
    getline(cin,name);
    Add_last(id,name);
     print();




}
