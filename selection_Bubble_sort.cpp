#include<iostream>
using namespace std;
void SelectionSort(int A[],int n)
{
    int i,j,temp,min_i;
    for(i=0;i<n-1;i++)
    {
        min_i=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min_i])
            {
                min_i=j;
            }

        }
        temp=A[i];
        A[i]=A[min_i];
        A[min_i]=A[i];
    }
}
