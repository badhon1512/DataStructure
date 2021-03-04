#include<iostream>
using namespace std;
void BubbleSort(int A[],int n)
{
    int i,j,temp;
    for(j=0;j<n-1;j++)
    {
            for(i=0;i<n-1-j;i++)
    {
        if(A[i]>A[i+1])
        {
            temp=A[i+1];
            A[i+1]=A[i];
            A[i]=temp;

        }
    }
    }

}
int main()
{
    int A[]={1,9,2,10,3,0};

    BubbleSort(A,6);
    for(int i=0;i<6;i++)
    {
        cout<<A[i]<<" ";
    }
}
