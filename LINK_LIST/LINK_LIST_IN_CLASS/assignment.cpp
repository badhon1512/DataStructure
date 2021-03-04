#include<iostream>
using namespace std;
int Count=0;
typedef struct listnode
{
    int data;
    listnode *next;
}*nodeptr;
nodeptr head=NULL,curr;



void first(int item)
{
    nodeptr newnode= new listnode;
    newnode->data=item;
    newnode->next=head;
    head=newnode;
    Count++;

}


void last(int item)
{
	nodeptr newnode = new listnode;
	newnode->data = item;
	newnode->next = NULL;

	if(head==NULL)
    {
        head = newnode;
    }
	else
	{
	    curr =head;
		while(curr->next != NULL)
		{
			curr = curr ->next;
        }
		curr->next = newnode;
    }
    Count++;

}


void del_first()
{
    nodeptr ptr=head;
    head=ptr->next;
    delete(ptr);
    Count--;
}
void del_last()
{
    nodeptr ptr=head,dptr;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    dptr=ptr->next;
    //ptr->next=NULL;
    delete(dptr);
    Count--;
}
void Search(int data)
{
    int Search=-1;
    nodeptr ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==data)
        {

            Search++;
        }
        ptr=ptr->next;
    }
    if(Search==-1)
    {
        cout<<"not found"<<endl;
    }
    else
        cout<<"found"<<endl;
}



void print()
{
    nodeptr ptr=head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

void Reverseprint(nodeptr head)
{

    if (head == NULL)
    return;


    Reverseprint(head->next);


    cout << head->data << " ";
}





void insert_nth_pos(int value,int p)
{
    nodeptr ptr=head;
    while(ptr->data!=p&&ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==p)
    {
        nodeptr newnode=new listnode;
        newnode->next=ptr->next;
        ptr->next=newnode;
        newnode->data=value;
    }
    else
        cout<<p<<" Not found !!!";
}
int main()
{
    int data,choice,p;
    while(true)
    {
        cout<<"What do u want?"<<endl<<"press 0 for return 1)for add in first 2)delete from last"<<endl;
    cout<<"press 3) for add in last press 4)for delete from last 5)for search 6)for print"<<endl;
    cout<<"press 7) for reverse print press 8)insert at nth position 9)count"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 0:
        return 0;
        break;
    case 1:
        cout<<"enter the data  ";
        cin>>data;
        first(data);
        break;
    case 2:
        del_first();
        break;
    case 3:
        cout<<"enter the data  ";
        cin>>data;
        last(data);
        break;
    case 4:
        del_last();
        break;
    case 5:
        cout<<"enter the data that you want to be search  ";
        cin>>data;
        Search(data);
        break;
    case 6:
        print();
        break;
        case 7:
        Reverseprint(head);

        break;
        case 8:
            cout<<"enter the possition: ";
            cin>>p;
            cout<<"enter the data: ";
            cin>>data;
           insert_nth_pos(data,p);
            break;
        case 9:
            cout<<"Count="<<Count;
            break;

        default:
            cout<<"wrong input";


    }
    }


}
