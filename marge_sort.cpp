#include<iostream>
using namespace std;
void merge(int Left[],int Right[],int A[],int mid,int n)
{
     int size=sizeof(A[])/sizeof(A[0]);

    cout<<size;
    int Size_L=mid;
    int Size_R=n-mid;
    int i,j,k;
    i=0,j=0;k=0;
    while(i<Size_L && j<Size_R)
    {
        if(Left[i]<Right[i])
        {
            A[k]=Left[i];
            i++;
        }
        else
        {
             A[k]=Right[j];
             j++;
        }
        k++;



    }
    while(i<Size_L)
    {
        A[k]=A[i];
        i++;
        k++;
    }
    while(j<Size_R)
    {
        A[k]=A[j];
        j++;
        k++;
    }


}
int merge_Sort(int A[],int n)
{
   if(n<2)
    return 0 ;

    int mid,i,j,k;
   mid=n/2;
   cout<<mid<<endl;
   int Left[mid];
   int r=n-mid;
   int Right[r];
   for(i=0;i<mid;i++)
   {
       Left[i]=A[i];
   }
   cout<<"left:";
   for(i=0;i<mid;i++)
   {
      cout<< Left[i]<<" ";
   }
   cout<<endl;

   for(i=mid;i<=n;i++)
   {
       Right[i-mid]=A[i];
   }
   cout<<"right";
   for(i=mid;i<n-1;i++)
   {
       cout<<Right[i-mid]<<" ";
   }
   merge_Sort(Left,mid);
   merge_Sort(Right,r);
   merge(Left,Right,A,mid,n);



}
void print_array(int A[],int n)
{

    int i;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int A[]={9,6,3,90,2,10,4,5};
    int size=sizeof(A)/sizeof(A[0]);

    cout<<size;
    cout<<"Given Array is :";
    print_array(A,size);
    cout<<"after nerge sort: ";
   merge_Sort(A,size);
   print_array(A,size);
}
