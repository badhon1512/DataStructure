#include<iostream>
using namespace std;
int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return 2 * i + 1;
}
int root(int i)
{
    return i/2;
}
int maxHeap(int h[], int heapSize)
{
    int i,p;
    for(i=heapSize;i>1;i--)
    {
        p=root(i);
        cout<<"i= "<<i<<"\n"<<"p= "<<p<<"\n"<<"h[i]= "<<h[i]<<"\n"<<"h[p]= "<<endl;
        if(h[p]<h[i])
        {
            return 0;
        }
    }
    return 1;
}
void maxHeapify(int heap[],int heapSize, int i)
{
    int l, r, largest, t;
    l=left(i);
    r=right(i);
    if(l<=heapSize&&heap[l]>heap[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    if(r<=heapSize&&heap[r]>heap[largest])
    {
        largest=r;
    }

    if(largest!=i)
    {
        t=heap[i];
        heap[i]=heap[largest];
        heap[largest]=t;
        maxHeapify(heap,heapSize,largest);
    }
}
void buildMaxHeap(int heap[],int heapSize)
{
    int i;
    for(i=heapSize/2;i>=1;i--)
    {
        maxHeapify(heap,heapSize,i);
    }
}
void printHeap(int heap[], int heapSize)
{
    int i;
    for(i=1;i<=heapSize;i++)
    {
        cout<<heap[i]<<"   ";
    }
    cout<<"\n"<<endl;
}
int main()
{
    int h,i,r;
    cout<<"enter size"<<endl;
    cin>>h;
    int H[h];
    for(i=1;i<=h;i++)
    {
        cin>>H[i];
    }

    cout<<endl;

    for(i=0;i<=h;i++)
    {
        cout<<H[i]<<"   ";
    }
    cout<<endl;

    printHeap(H,h);
    //maxHeapify(H,h,3);
    buildMaxHeap(H,h);
    printHeap(H,h);
    return 0;
}

