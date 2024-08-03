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
    if (head == nullptr)
        return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    // Create an array

    int n,values[100],i;
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
    head->next = nullptr;
    head->prev = nullptr;

    Node* temp = head;

    // Create the rest of the nodes and link them
    for (int i = 1; i < n; ++i) {
        Node* newNode = new Node();
        newNode->data = values[i];
        newNode->next = nullptr;
        newNode->prev = temp;
        temp->next = newNode;
        temp = newNode;
    }

    Node* middle = findMiddle(head);
    if (middle != nullptr) {
        cout << "Middle of the list: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

return 0;
}

