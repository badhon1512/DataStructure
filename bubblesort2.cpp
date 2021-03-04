#include<iostream>
using namespace std;
void bubblesort(int A[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                int sifat=A[i];
                A[i]=A[j];
                A[j]=sifat;
            }
        }
    }


}
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
     bubblesort(A,n);

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

}
