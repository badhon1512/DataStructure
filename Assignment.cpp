#include <iostream>
#define length 10
using namespace std;

int nextEmptyPosition=0;
int arr[length];
int n=0;

void _insert(int value)
{
    arr[nextEmptyPosition]=value;
    nextEmptyPosition++;
}

void _delete(int value)
{
    for(int i=0;i<nextEmptyPosition;i++)
    {
        if(value==arr[i])
        {
            n=i;
            nextEmptyPosition--;
        }
    }

    for(int i=n;i<=nextEmptyPosition;i++)
    {
        arr[i]=arr[i+1];

    }
}

int LinearSearch(int value)
{
    for(int i=0;i<nextEmptyPosition;i++)
    {
        if(arr[i]==value)
        {
            return i;
        }
    }
    return -1;
}



void _update(int oldValue, int newValue)
{

}


void PrintArray()
{
    for(int i=0;i<nextEmptyPosition;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main()
{
    _insert(10);
    _insert(12);
    _insert(13);
    _insert(6);

    PrintArray();
    _delete(12);
    PrintArray();
    int index=LinearSearch(10);
    if(index>-1)
    {
        cout<<"value is found at index: "<<index<<endl;
    }
    else
        cout<<"value is not found"<<endl;

    return 0;
}
