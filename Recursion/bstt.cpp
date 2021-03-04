#include<iostream>
using namespace std;
 typedef struct BST
 {
     int data;
     BST  *Left,*Right;

 }*Node;

 Node root=NULL;

Node makenode(int data)
{
    Node newnode=new BST;
    newnode->data=data;
    newnode->Left=newnode->Right=NULL;
    return newnode;
}


Node InsertNode(Node root,int data)
{
    if(root==NULL)
        return makenode(data);
    else if(data<root->data)
    {
        root->Left=InsertNode(root->Left,data);
    }

else
    {
        root->Right=InsertNode(root->Right,data);
    }
    return root;
}

void inorder(Node root)
{
   //write your code here}
   if(root!=NULL)
   {
       inorder(root->Left);
       cout << root->data<<" ";
       inorder(root->Right);
   }
}
int main()
{
   // Node root=NULL;
  root=InsertNode(root,10);
  InsertNode(root,5);
  InsertNode(root,6);
  inorder(root);

}
