#include<iostream>
using namespace std;
void input(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"enter marks for sub "<<i+1<< " ";
        cin>>*(A+i);
    }
}
void total(int *A,int n)GHJDF
{
    int total=0;

    for(int i=0;i<n;i++)
    {
        cout<<"marks for sub "<<i+1<< " "<<*(A+i)<<endl;
        total=total+*(A+i);
    }
    cout<<total<<endl;
}

int main()
{
    int n;
    cout<<"enter total subject number: ";
    cin>>n;
    int *A;
    A=new int[n];
    input(A,n);
    total(A,n);

 delete []A;




}

