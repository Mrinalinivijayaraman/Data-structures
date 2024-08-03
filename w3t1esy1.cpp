#include <iostream>
using namespace std;

// Node structure for a doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Function to find the middle of the doubly linked list
Node* findMiddle(Node* head) {
    if (head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    // Create nodes manually
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    Node* sixth=new Node();
    Node *seventh=new Node();

    // Assign data to nodes
    head->data = 1;
    second->data = 2;
    third->data = 6;
    fourth->data = 4;
    fifth->data = 5;
    sixth->data=7;
    seventh->data=8;

    // Link nodes together
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = fourth;
    fifth->next = sixth;
    sixth->prev=fifth;
    sixth->next=seventh;
    seventh->prev=sixth;
    seventh->next=NULL;

    // Find the middle of the list
    Node* middle = findMiddle(head);
    if (middle != NULL) {
        cout << "Middle of the list: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}
