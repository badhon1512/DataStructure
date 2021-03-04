#include<stdio.h>

struct node
{
    int data;
    struct node* next;
};
 struct node* head;//global variable
 void Insert(int x)
 {
    struct node* temp=(node*)malloc(sizeof(struct node));
     temp->data=x;
     temp->next=head;
     head=temp;

 }
 void print()
 {
     struct node* temp=head;
     while(temp!=NULL)
     {
         printf("%d",temp->data);
         temp=temp->next;

     }

 }
 int main()
 {
     head=NULL;//empty list
     int n,x;
     printf("how many numbers U want to store?");
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
         printf("enter the number \n");
         scanf("%d",&x);
         Insert(x);
         print();
     }

 }
