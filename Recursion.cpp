#include<iostream>
using namespace std;
long fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    return(x*fact(x-1));
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is :"<<fact(n);
}
