#include <iostream>
using namespace std;

// Node structure for a doubly linked list
struct Node {
    int data;
    Node* next;
};
//deleting the last element

void deletelast (Node *head){

    Node * temp =head;
    if(temp->next == NULL)
    {
        cout<"only one element present";
    }
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    Node * newnode=temp->next;
    temp->next=NULL;
    delete newnode;
}
//insereting at first
Node * insertf (Node * head, int value)
{
    Node * newnode= new Node();
    newnode->data=value;
    newnode->next=head;
    head=newnode;
    return head;
}
//printing function
void print(Node *head)
{  cout<<"the list:"<<endl;
     Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}



int main()
{
    // Create an array

    int n,values[100],i,value;
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter the elements :";
    for(i=0;i<n;i++)
    {
        cin>>values[i];
    }



    // Create the head node
    Node* head = new Node();
    head->data = values[0];
    head->next = NULL;


    Node* temp = head;

    // Create the rest of the nodes and link them
    for (int i = 1; i < n; ++i) {
        Node* newNode = new Node();
        newNode->data = values[i];
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }
    deletelast(head);
    print(head);
    cout<<"enter value to insert:";
    cin>>value;
    head=insertf(head,value);
    print(head);

}
