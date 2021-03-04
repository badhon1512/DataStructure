#include<iostream>
using namespace std;

void Bubble_sort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(A[j]>A[j+1])
           {
               temp=A[j];
               A[j]=A[j+1];
               A[j+1]=temp;
           }
        }
    }
}
void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int n,i;
    cout<<"enter  the size of the array: ";
    cin>>n;
    int A[n];
    cout<<"enter your array:";
    for(i=0;i<n;i++)
    {
        cin>>A[i];

    }
    cout<<"your Array is:";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<"  ";
    }
cout<<"After sorting:";
    Bubble_sort(A,n);
    display(A,n);
}
