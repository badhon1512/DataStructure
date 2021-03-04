#include<iostream>
using namespace std;
typedef struct BST()
{
    int data;
    struct BST *left;
    struct BST *right;
}*node;
node root=NULL;
node Insert(node root,int data)
{
    node newnode=new BST;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;
    }
    else if(data<root->data)
        root->left=Insert(root->left,data);
    else
        root->right=Insert(root->right,data);

}


bool Search(int data)
{
    if(root==NULL)
    {
        cout<<"empty";
    }
   if(data==)
}
