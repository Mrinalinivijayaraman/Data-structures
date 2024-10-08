#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;

};
void inserting(node** head, int data)
{
    node* n = new node();
    n->data=data;
    n->next = *head;
    *head = n;
}
void print(node* head)
{
    cout<<"the original list:"<<endl;
    while (head != NULL)
        {
        cout << head->data<<endl;
        head = head->next;
    }
}
int removedup(node * head)
{
    cout<<"removed list :"<<endl;
    node *current=head;
    node *p=current->next;
    while(current!=NULL && p!=NULL)
        {
            if(current->data!=p->data)
            {
               cout<<current->data<<endl;
            }
            p=p->next;
            current=current->next;
            }
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
    while(current!=NULL)
    {
        cout<<current->data;
        current=current->next;
    }
}
int main()
{
    node* head = NULL;
    inserting(&head, 15);
    inserting(&head, 15);
    inserting(&head, 15);
    inserting(&head, 10);
    inserting(&head, 10);
    inserting(&head, 5);
    print(head);
    removedup(head);
    return 0;
}
