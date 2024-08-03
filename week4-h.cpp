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
Node* mergeSorted(Node* head1, Node* head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;
    Node* mergedHead = NULL;
    Node* mergedTail = NULL;
    Node* temp1 = head1;
    while (temp1->next != head1) {
        temp1 = temp1->next;
    }
    temp1->next = NULL;
    Node* temp2 = head2;
    while (temp2->next != head2) {
        temp2 = temp2->next;
    }
    temp2->next = NULL;
    Node* current1 = head1;
    Node* current2 = head2;
    while (current1 != NULL && current2 != NULL) {
        if (current1->data < current2->data) {
            if (mergedHead == NULL) {
                mergedHead = mergedTail = current1;
            } else {
                mergedTail->next = current1;
                mergedTail = current1;
            }
            current1 = current1->next;
        } else {
            if (mergedHead == NULL) {
                mergedHead = mergedTail = current2;
            } else {
                mergedTail->next = current2;
                mergedTail = current2;
            }
            current2 = current2->next;
        }
    }
    while (current1 != NULL) {
        if (mergedHead == NULL) {
            mergedHead = mergedTail = current1;
        } else {
            mergedTail->next = current1;
            mergedTail = current1;
        }
        current1 = current1->next;
    }

    while (current2 != NULL) {
        if (mergedHead == NULL) {
            mergedHead = mergedTail = current2;
        } else {
            mergedTail->next = current2;
            mergedTail = current2;
        }
        current2 = current2->next;
    }
    mergedTail->next = mergedHead;
    return mergedHead;
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
int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;
    int i, n1,n2,num;
    cout<<"enter no of elements in list 1:";
    cin>>n1;
    cout<<"enter elements:"<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>num;
        insertNode(head1,num);
    }
    cout << "First  List: ";
    print(head1);
   cout<<"enter no of elements in list 2:";
   cin>>n2;
   cout<<"enter elements:"<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>num;
        insertNode(head2,num);
    }
    cout << "Second  List: ";
    print(head2);
    Node* mergedList = mergeSorted(head1, head2);
    cout << "Merged Sorted Circular Linked List: ";
    print(mergedList);
    return 0;
}
