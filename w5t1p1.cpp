#include<iostream>
using namespace std;
class stacks
{
public:
    int data;
    stacks*next;
    stacks*top=NULL;


void push(int data)
{
    stacks*temp=new stacks();
    temp->data=data;
    temp->next=top;
    top=temp;
}
void pop()
{
    stacks*temp;
    if(top==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    temp=top;
    top=top->next;
    delete temp;

}
void display()
{
    stacks*temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}};
int main()
{
    stacks s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<"original list:"<<endl;
    s.display();
    cout<<"after deleting:"<<endl;
    s.pop();
    s.display();
    cout<<"modified stack:"<<endl;
    s.display();
    return 0;
}

