#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) current = current->next;
    current->next = newNode;
}

void reverseList(Node*& head) {
    Node* previous = nullptr;
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    head = previous;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << (head->next == nullptr ? '\n' : ' ');
        head = head->next;
    }
}

void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* nextNode = head->next;
        delete head;
        head = nextNode;
    }
}

int main() {
    Node* head = nullptr;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    reverseList(head);
    printList(head);
    deleteList(head);
    return 0;
}
