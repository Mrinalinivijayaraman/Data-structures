#include<iostream>
using namespace std;
class Stack
{
public:

   int data;
    Stack*next;
    Stack*top=NULL;


void push(int data)
{
    Stack*temp=new Stack();
    temp->data=data;
    temp->next=top;
    top=temp;
}
    bool isequal(Stack&other)
    {
        Stack*temp1=top;
        Stack*temp2=other.top;
        while(temp1!=NULL&&temp2!=NULL)
        {
            if(temp1->data!=temp2->data)
            {
                cout<<temp1->data<<","<<temp2->data<<endl;
                cout<<"not indentical"<<endl;
            }
            else{
                cout<<temp1->data<<","<<temp2->data<<endl;
                cout<<"identical"<<endl;
            }
            temp1=temp1->next;
            temp2=temp2->next;

        }

        }
};

int main()
{
    Stack st,st1;
    st.push(10);
    st.push(20);
    st.push(30);
    st1.push(10);
    st1.push(30);
    st1.push(40);
    st.isequal(st1);
    return 0;

}

