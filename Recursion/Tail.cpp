#include<iostream>
using namespace std;
int print(int n)
{
    if(n==0) return 1;

     int A=n*print(n-1);
     return A;

}
int main()
{
    cout<<print(5);
}
