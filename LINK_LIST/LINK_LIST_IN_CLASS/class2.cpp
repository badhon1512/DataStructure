#include<iostream>
using namespace std;
class listelement
{
    int data;
public:
    listelement ()
        {
            cout<<"constractor calling"<<endl;
        }
    getdata(int x)
                {
                   data=x;
                }
    void putdata()
    {
        cout<<data<< " ";
    }

    listelement *next;
    ~listelement()
    {
        cout<<endl<<"distrector calling";
    }
};
int main()
{
    listelement obj1;
    obj1.getdata(100);
    obj1.putdata();
    obj1.next=new listelement;
    (obj1.next)->getdata(1);
    (obj1.next)->putdata();
    delete obj1.next;

}
