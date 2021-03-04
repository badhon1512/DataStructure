#include<iostream>
using namespace std;
#define maxsize 1000

void Insertion(int A[],int n)
{
    int data,pos;
    cout<<"enter the data that you want to be insert : "<<endl;
    cin>>data;
    cout<<"enter the index no. that you want to be inserted : "<<endl;
    cin>>pos;
    for(int i=n;i>=pos;i--)
    {
        A[i]=A[i-1];
    }
    A[pos]=data;
}

void deletion(int A[],int n)
{
    int pos;
    cout<<"enter the index no. that you want to be delete :"<<endl;
    cin>>pos;
    for(int i=pos;i<n;i++)
    {
        A[i]=A[i+1];
    }
}
void print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int A[maxsize];
    int n,choice;
    cout<<"Enter the size of your recent Array: "<<endl;
    cin>>n;
    cout<<"enter "<<n<<" element :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"what Do u Want :??"<<endl;
    cout<<"press 0)for exit press 1)for Insertion press 2)for deletion"<<endl;
    cout<<"press 3)for display "<<endl;
    while(1)
    {
        cout<<"enter choice :"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 0:
            return 0;
            break;
        case 1:
            n++;
            Insertion(A,n);
            break;
        case 2:
            deletion(A,n);
            break;
        case 3:
            print(A,n);
            break;
        default:
            cout<<"wrong Input"<<endl;



        }
    }

}


