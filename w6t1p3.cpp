#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node * next;
};
class intq
{
public:
    node * Front=NULL;
    node * rear=NULL;


void enqueue(int data)
{
    node*newn= new node();
    newn->data=data;
    if(Front==NULL)
    {
        Front=newn;
        rear=newn;
    }
    else{
        rear->next=newn;
        rear=newn;
    }

}
void dequeue()
{
    if(Front!=rear)
    {
        node*temp=Front;
        Front=Front->next;
        delete temp;
    }
    else
    {
        delete Front;
        Front=NULL;
        rear=NULL;
    }
}
void display()
{
    node* temp=Front;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
};
int main()
{
    intq q1;
    cout<<"enqueue elements:";
    q1.enqueue(10);
    q1.enqueue(20);
    q1.display();
    q1.dequeue();
    cout<<"after dequeue:";
    q1.display();
}
