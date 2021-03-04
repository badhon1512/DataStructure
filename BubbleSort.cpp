#include<iostream>
using namespace std;
void BubbleSort(int *A,int n);
int main()
{
    int n,*A;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    A=new int[n];
    cout<<"Enter "<<n<<" element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"After sorting: "<<endl;
    BubbleSort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<*(A+i)<<" ";
    }


}
void BubbleSort(int *A,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int Swap;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                Swap=A[j];
                A[j]=A[j+1];
                A[j+1]=Swap;
            }
        }
    }
}
