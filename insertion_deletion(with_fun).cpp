#include<iostream>
using namespace std;
void insertion(int A[],int *n)
{
    int i,data,index;
    cout<<"enter the data that you want to be insert: ";
    cin>>data;
    cout<<"enter the index that you want to be insert your data: ";
    cin>>index;
    *n++;

 for(i=*n;index<=i;i--)
           {


            A[i]=A[i-1];
            }



    A[index]=data;
    */
    *n += 1;



}
void deletion(int A[],int n)
{
     int i,index;
     cout<<"enter the index that you want to be delete :";
     cin>>index;

     for(i=index;i<=n;i++)
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
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
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
        insertion( A,&n);
        n++;
        cout<<n;
        break;
    case 2:
        {
            deletion(A,n);
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
