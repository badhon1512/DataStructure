
#include<iostream>
using namespace std;

void bubblesort(int A[],int n)
 {
     int i;
     for(i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(A[j]<A[i])
             {
                 int temp=A[i];
                 A[i]=A[j];
                 A[j]=temp;
             }
         }
     }
 }
 int linear_search(int A[],int n,int value)

 {
     for(int i=0;i<n;i++)
     {
         if(value==A[i])
             return i;
     }

 }
 int main()
 {
     int n,i,value;
     cout<<"enter the size of an Array:";
     cin>>n;
     int A[n];
     for(i=0;i<n;i++)
     {
         cin>>A[i];
     }
   bubblesort(A,n);
   for(i=0;i<n;i++)
   {
       cout<<A[i]<<" ";
   }
   cout<<"enter the value that you want to be search:";
   cin>>value;
   int a=linear_search(A,n,value);
   cout<<"the index of value is"<<a;

 }
