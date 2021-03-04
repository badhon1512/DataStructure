#include<iostream>
using namespace std;
void selection_sort(int A[],int n)
{
    int i,j,temp,small_i;
    for(i=0;i<n;i++)
    {
        small_i=i;
        for(j=i+1;j<n;j++)
        {
            if(A[small_i]>A[j])
            {
                small_i=j;
            }
        }
        temp=A[i];
        A[i]=A[small_i];
        A[small_i]=temp;
    }
}
void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<< " ";
    }
}
void linear_Search(int A[],int n)
{
    int value;
    cout<<"enter  the data";
    cin>>value;
    int count=-1;
 for(int i=0;i<n;i++)
 {

     if(value==A[i])
     {
         count=i;
     }
 }
 if(count!=-1)
    cout<<"number is found at index:"<<count;
 else
 cout<<"data is not found";

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
    selection_sort(A,n);
    display(A,n);
    linear_Search(A,n);
}

