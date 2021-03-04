#include<iostream>
#define lenght 10
int top=-1;
using namespace std;
void _insert(int *A,int key)
{
    int i;
    top++;
    A[top]=key;
}


void selectionsort(int *A)
{
    int i,j,temp,small_i;
    for(i=0;i<10;i++)
    {
        small_i=i;
        for(j=i+1;j<10;j++)
        {
            if(A[small_i]>A[j])
            {
                small_i=j;
            }
        }
        temp=A[i];
        A[i]=A[small_i];
        A[small_i]=temp;
    }
}

void insertionsort(int *A)
{
    int i, j, v;

for ( i=0; i<10; ++i ){

v = A[i];

j = i - 1;


while( j >= 0 && A[j] > v ){



A[j+1] = A[j];

j--;

}

A[j+1] = v;


}
}



int binarySearch(int *A,int key)
{
    int first=0;
    int last=10-1;
    int middle;
    while(first<=last)
    {
    middle=(first+last)/2;
    if(A[middle]==key)
    {
        return middle;
    }
    else if(A[middle]>key)
    {
        last=middle-1;
    }
    else
        first=middle+1;

    }
    return -1;
}
void print(int *A)
{
    for(int i=0;i<10;i++)
    {
        cout<<*(A+i)<<" ";
    }
    cout<<endl;
}
int main()
{
    int A[lenght];
    _insert(A,9);
    _insert(A,6);
    _insert(A,16);
    _insert(A,2);
    _insert(A,3);
    _insert(A,20);
    _insert(A,8);
     _insert(A,25);
      _insert(A,30);
      _insert(A,7);


      insertionsort(A);

       selectionsort(A);

      print(A);

      cout<<binarySearch(A,30)<<endl;

}


