#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*next;
};
void inserts(node**head,int data)
{
   node*n=new node();
   n->data=data;
   n->next=*head;
   *head=n;

}
void deleteatpos(node*head,int position)
{
    node*temp=head;

for(int i=1;temp!=NULL&&i<position-1;i++)
{
    temp=temp->next;
}
if(temp==NULL||temp->next==NULL)
{
    cout<<"position not found";
}
node*newnode=temp->next;
temp->next=newnode->next;
delete newnode;
}
void insertatpos(node*head,int position1,int value)
{
   node*t=head;
   for(int i=1;t!=NULL&&i<position1-1;i++)
   {
       t=t->next;
   }
   if(t==NULL||t->next==NULL)
   {
      cout<<"position not found:";
    }
       node*newnode=new node();
       newnode->data=value;
       newnode->next=t->next;
       t->next=newnode;

}

void print(node*head)
{  cout<<"original list: "<<endl;
    node*current=head;
    while(current!=NULL)
    {
      cout<<current->data<<endl;
current=current->next;
    }

}
int main()
{
    int position,value,position1;
    node*head=NULL;
    inserts(&head,2);
    inserts(&head,6);
    inserts(&head,7);
    inserts(&head,8);
    print(head);
    cout<<"enter the position to delete:";
    cin>>position;
    deleteatpos(head,position);
     print(head);
     cout<<"enter the position to  insert:";
     cin>>position1;
     cout<<"enter the value to insert;";
     cin>>value;
     insertatpos(head,position1,value);
     print(head);
    return 0;

}
