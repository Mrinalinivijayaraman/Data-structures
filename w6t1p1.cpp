#include<iostream>
using namespace std;
class intq
{
public:
    int q[50],n,front1=-1,rear=-1;

    intq(int size1)
    {
        n=size1;
    }
    int enqueue(int elem)
    {
        if((rear+1)%n==front1)
        {
            cout<<"overflow";
            return 0;
        }
        else if(front1==-1&&rear==-1)
        {
            front1=0;
            rear=0;
        }
        else
        {
            rear=(rear+1)%n;

        }
        q[rear]=elem;

    }
    void dequeue()
    {
        int elem;
        if(front1==-1)
        {
            cout<<"empty queue";
        }
        else
        {
            if(front1=rear)
            {
                front1=-1;
                rear=-1;
            }
            else
            {
                elem=q[front1];
                front1=(front1+1)%n;

            }

        }
    }
    void display()
    {
        for(int i=front1;i<rear +1;i++)
        {
            cout<<endl<<q[i];
        }

    }
};
    int main()
    {
        intq q1(5);
        q1.enqueue(10);
        q1.enqueue(20);
        q1.enqueue(30);
        q1.enqueue(40);
        q1.enqueue(50);
        q1.display();
        //q1.dequeue();

    }

