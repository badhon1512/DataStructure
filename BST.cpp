#include<iostream>
using namespace std;
typedef struct BST
{
    int data;
    struct BST *Left,*Right;
}*node;
node makenode(int value)
{
    node newnode=new BST;
    newnode->data=value;
    newnode->Left=NULL;
    newnode->Right=NULL;
    return newnode;
}
node insert_node(node ptr,int value)
{
    if(ptr==NULL)
    {
        ptr=newnode;
    }
    else if(value<ptr->data)
    {
        ptr->Left=insert_node(ptr->Left,value);
    }
    else if(value>ptr->data)
    {
        ptr->Right=insert_node(ptr->Right,value);
    }
    return ptr;
}
