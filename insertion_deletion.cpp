#include<iostream>
using namespace std;
void RaedArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
}
void InsertArray(int A[],int n,int data,int pos)
{
    int i;

    n++;

 for(i=n;pos<=i;i--)
           {


            A[i]=A[i-1];
            }



    A[pos]=data;



}
void deletion(int A[],int n,int data)
{
     int i,pos;
     for(i=0;i<n;i++)
     {
         if(A[i]==data)
         {
             pos=i;
             break;
         }
     }


     for(i=pos;i<=n;i++)
     {

             A[i]=A[i+1];
             }
             n--;
}
void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<"  ";
    }
}
int main ()
{
    int n,i;
    cout<<"enter the size of the array:";
    cin>>n;
    int A[n];
    cout<<"enter "<<n<<" element";
    RaedArray(A,n);

    cout<<"your entered data: [";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"]";
    while(1)

    {
        int choice;
       cout<<"what do you want press "<<endl<<"0)for exit 1)for insertion 2)for deletion 3)for display";
    cin>>choice;
    switch(choice)
    {
    case 0:
       return 0;
       break;
    case 1:
        int data,pos;
        cout<<"enter the data that you want to be insert: ";
    cin>>data;
    cout<<"enter the index that you want to be insert your data: ";
    cin>>pos;
        InsertArray( A,n,data,pos);
        n++;
        break;
    case 2:
        {
            int pos;
            cout<<"enter the data that you want to be delete :";
     cin>>data;
            deletion(A,n,data);
            n--;

        break;
        }

    case 3:
        display(A,n);
        break;
    default:
        cout<<"wrong input";
    }
    }


}
