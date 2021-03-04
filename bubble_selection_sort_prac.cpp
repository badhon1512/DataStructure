#include<iostream>
using namespace std;
void bubble_sort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if (A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }

    }
}
int main()
{
    int n;
    cout<<"enter the size ";
    cin>>n;
    int *A;
    A=new int[n];
    cout<<"enter the element: ";
    for(int i=0;i<n;i++)
    {
        cin>>*(A+i);
    }
    bubble_sort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<*A+i<<" ";
    }
}
