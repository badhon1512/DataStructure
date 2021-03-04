#include<iostream>
using namespace std;

int Binary_search(int A[],int n,int value)
{
    int mid;
    int first=0;
    int last =n-1;
    while(first<=last)
    {
        mid=first+last/2;

        if(value==A[mid])
        {
            return mid;
        }
       else if(value>mid)
        {
            first=mid+1;
        }
        else
            last=mid-1;
    }
    return -1;
    }

int main()
{
    int N,i,Q,j,a,k;
   cin>>N;
   int A[N];
   for(i=0;i<N;i++)
   {
       cin>>A[i];
   }

   a=Binary_search(A,N,4);

   cout<<a;

}

