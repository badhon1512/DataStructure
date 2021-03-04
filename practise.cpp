#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "enter the size of the array";
    cin >> n;
    int A[n];

    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    int sum=0;
    for (i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    cout<<sum;
}
