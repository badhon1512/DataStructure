#include<iostream>
using namespace std;
typedef struct BST
{
    int data;
    BST *Left,*Right;
}*Node;

Node root=NULL;

Node MakeNode(int data)
{
    Node newnode=new BST;
    newnode->data=data;
    newnode->Left=newnode->Right=NULL;
    return newnode;
}
Node Insertdata(Node root,int A[])
{
    for(int i=0;i<5;i++)
    {
        if(root==NULL)
        root=MakeNode(A[i]);
 else if(A[i]<root->data)
    root->Left=Insertdata(root->Left,A);
 else
    root->Right=Insertdata(root->Right,A);

    return root;

    }

}
void preorder(Node root)
{
    if(root!=NULL)
        {
            preorder(root->Left);
            cout<<root->data<<" ";


             preorder(root->Right);


        }

}
int main()
{
  int A[5]={10,5,3,2,1};

   root= Insertdata(root,A);

    preorder(root);
}
