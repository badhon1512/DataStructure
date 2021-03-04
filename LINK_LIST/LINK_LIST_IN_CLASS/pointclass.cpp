#include<iostream>
using namespace std;
class listelement
{
    int data;
public:
    void getdata(int x)
    {
        data=x;
    }
    void putdata()
    {
        cout<<data<<" ";
    }
    listelement *next;
};
int main()
{
     listelement obj1,obj2;
     obj1.getdata(5);
     obj1.putdata();
     obj1.getdata(77);
     obj1.putdata();
     obj2.getdata(100);
     obj1.next=&obj2;
     (obj1.next)->putdata();


}
