#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* insert(Node* head, int y) {
    Node* temp = new Node(y);
    if (head == NULL || y < head->data) {
        temp->next = head;
        return temp;
    }
    Node* curr = head;
    while (curr->next != NULL && y > curr->next->data) {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

void printlist(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node* revList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr) {
        Node* next = curr->next; // Store the next node.
        curr->next = prev; // Reverse the link.
        prev = curr;
        curr = next;
    }
    return prev; // prev will be pointing to the new head.
}

int main() {
    Node* head = nullptr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        head = insert(head, element);
    }
    cout << "Original List: ";
    printlist(head);
    head = revList(head);
    cout << "Reversed List: ";
    printlist(head);
}
