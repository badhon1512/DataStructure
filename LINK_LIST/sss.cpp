#include<iostream>
using namespace std;

int main()
{
    int A[5],n,temp,i,j;
    cout<<"how many element you wanna make array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>A[i];
    }
    cout<<"before sorting elements are"<<endl;
    for(i=0;i<n;i++)
    {

        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
        {
            for( j=0;j<n;j++)
            {
                if(j[i]>j[i+1])
                {
                    temp=j[1];
                    j[1]=j[0];
                    j[0]=temp;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<" ";
        }
        }
