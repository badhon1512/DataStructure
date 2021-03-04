#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m;

    string I[m];


    for(int i=0;i<m;i++)
    cin>>I[i];



 cin>>n;
 string Q[n];
 for(int j=0;j<n;j++)
    cin>>Q[j];

    for(int j=0;j<n;j++)
    {
        int s1=0;
        for(int i=0;i<m;i++)
        {
             if(Q[j]==I[i])
                s1++;

        }
        cout<<s1;
    }


    //cin>>m
}
