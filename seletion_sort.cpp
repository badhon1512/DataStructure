#include<iostream>
#include<stdlib.h>
using namespace std;
void SelectionSort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        int min_i=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min_i])
            {
                min_i=j;
            }
        }
       temp=A[i];
       A[i]=A[min_i];
       A[min_i]=temp;

    }
}

 int BinarySearch(int *A,int l,int data,int h)
{
    int mid;
    while(l<h)
    {
        mid=(l+h)/2;
        if(A[mid]==data)
            return mid;
        else if(A[mid]<data)
            return BinarySearch(A,mid+1,data,h);
        else
            return BinarySearch(A,l,data,mid-1);

    }
    return -1;

}
int main()
{
    int n,i,data;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int A[n];
    cout<<"Enter "<<n<<" Element : ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<endl<<"Your Entered Elements Are: ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    SelectionSort(A,n);
    cout<<endl<<"After Sorting elements Are: ";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
     cout<<endl;
     cout<<"enter data that you you want to search : ";
     cin>>data;
    int I=BinarySearch(A,0,data,n-1);
    if(I==-1)
        cout<<"Your data is not Found "<<endl;
    else
     cout<<"Your data is  Found at index "<<I<<endl;

}
