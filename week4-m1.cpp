#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};
void insertNode(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        head->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}
void modifyList(Node* head) {
    if (head == NULL) {
        return;
    }
    int totalSum = 0;
    Node* temp = head;
    do {
        totalSum += temp->data;
        temp = temp->next;
    } while (temp != head);

    temp = head;
    do {
        temp->data = totalSum - temp->data;
        temp = temp->next;
    } while (temp != head);
}
void print(Node* head) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    Node* head = NULL;
    int i, n1,num;
    cout<<"enter no of elements in list 1:";
    cin>>n1;
    cout<<"enter elements:"<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>num;
        insertNode(head,num);
    }
    cout << "original List: ";
    print(head);
    modifyList(head);
    cout<<"modified list : ";
    print(head);
}
