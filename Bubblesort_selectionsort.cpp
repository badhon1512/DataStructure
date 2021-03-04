#include<iostream>
using namespace std;
void BubbleSort(int A[],int n)
{
    int i,j,temp;
    for(j=0;j<n-1;j++)
    {
            for(i=0;i<n-1-j;i++)
    {
        if(A[i]>A[i+1])
        {
            temp=A[i+1];
            A[i+1]=A[i];
            A[i]=temp;

        }
    }
    }

}
void SelectionSort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
}
void display(int A[],int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int A[]={2,1,7,3,4,0};

    while(1)
    {
        int choice;
        cout<<"what do u want?"<<endl;
        cout<<"press 0)for exit 1)for bubble_sort 2)for selection_sort 3)for display";
        cin>>choice;
        switch(choice)
        {
        case 0:
            return 0;
            break;
        case 1:
            BubbleSort(A,6);
            break;
        case 2:
            SelectionSort(A,6);
            break;
        case 3:
            display(A,6);
            break;
        default:
            cout<<"wrong input";
        }
    }
}
