#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    int i,j,temp,comparison=0,exchange=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                exchange++;
            }
            comparison++;
        }
        cout<<"comparisons:"<<comparison<<endl;
        cout<<"exchange:"<<exchange<<endl;
    }

}
void selectionsort(int arr[],int n)
{
    int i, j, k, temp,comparison=0,exchange=0;

    for ( i=0; i<n-1; ++i ){

    k = i;



    for ( j=i+1; j<n; ++j )
{




    if( arr[k] > arr[j] ) k = j;
{
    temp = arr[i];

    arr[i] = arr[k];

    arr[k]=temp;
    exchange++;
}
    comparison++;
    }

    cout<<"comparisons:"<<comparison<<endl;
        cout<<"exchange:"<<exchange<<endl;

}
}
void insertionsort(int arr[],int n)
{
    int i, j, v,comparison=0,exchange=0;

for ( i=1; i<n; ++i ){

v = arr[i];

j = i - 1;


while( j >= 0 && arr[j] > v ){



arr[j+1] = arr[j];

j--;
exchange++;

}

arr[j+1] = v;
comparison++;
}
cout<<"comparisons:"<<comparison<<endl;
        cout<<"exchange:"<<exchange<<endl;
}
int main()
{
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int i,arr[n];
    cout<<"enter the element of array:"<<endl;
    for(i=0;i<n;i++)
    {
       cout<<"enter elements to the index " <<i<<":";
        cin>>arr[i];
    }
    cout<<"the input array is:"<<"[";
    for(i=0;i<n;i++)
    {

        cout<<arr[i]<<' ';
    }
    cout<<"]"<<endl;;
    cout<<" 1)bubble sort 2)selection sort 3)insertion sort:"<<endl;
    int choice;
    cin>>choice;

     if(choice==1)
    {
        bubblesort(arr,n);
        cout<<"after bubble sort the array is:"<<endl<<"[";
        for(i=0;i<n;i++)
    {

        cout<<arr[i]<<' ';
    }
    cout<<"]";
    }
    else if(choice==2)
    {

        selectionsort(arr,n);
        cout<<"after selection sort the array is:"<<endl<<"[";
        for(i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<"]";
    }
    else if(choice==3)
    {

        insertionsort(arr,n);
        cout<<"after insertion sort the array is:"<<endl<<"[";
        for(i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<"]";
    }
    else
    {
        cout<<"wrong input";
    }
}
