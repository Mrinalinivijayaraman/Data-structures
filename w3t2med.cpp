#include <iostream>
#include <string>
using namespace std;
class Node
{
    public:
    string data;
    Node* prev;
    Node* next;
};
void insertEnd(Node**head, string data) {
    Node* newNode = new Node();
    newNode->data=data;
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

Node* findMiddle(Node* head,string data)
{
    Node * curr= new Node();
    curr=head;
    Node* middle= new Node();
    int t=1;
    while(curr!=NULL)
    {
        curr=curr->next;
        t++;
    }
    curr=head;
    for(int i=1;i<(t/2);i++)
    {
        curr=curr->next;
    }
    middle->data=data;
    middle->next=curr->next;
    middle->prev=curr;
    middle->next->prev=middle;
    curr->next=middle;
}




void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

}


int main()
 {
     string data;
    Node* head = NULL;
    insertEnd(&head, "HI");
    insertEnd(&head, "MY");
    insertEnd(&head, "NAME");
    insertEnd(&head, "IS");
    insertEnd(&head, "MRINALINI");
    cout << "actual List: ";
    print(head);
    cout<<"string :";
    cin>>data;
    findMiddle(head,data);
    print(head);

}
