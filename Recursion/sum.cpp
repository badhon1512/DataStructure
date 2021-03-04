#include<iostream>
using namespace std;
void sum(int n)
{
    if(n<1)return;
    int a=n +sum(n-1);
    cout<<a;
}
int main()
{
    sum(5);
}
