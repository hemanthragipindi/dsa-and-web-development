#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* previous;
    Node* next;
};

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr, nullptr};
    if (head == nullptr) {
        head = newNode;
        head->next = head;
        head->previous = head;
        return;
    }
    Node* tail = head->previous;
    newNode->next = head;
    newNode->previous = tail;
    tail->next = newNode;
    head->previous = newNode;
}

void printCircularList(Node* head) {
    if (head == nullptr) return;
    Node* current = head;
    do {
        cout << current->data << ' ';
        current = current->next;
    } while (current != head);
    cout << '\n';
}

void deleteList(Node*& head) {
    if (head == nullptr) return;
    Node* current = head->next;
    while (current != head) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    delete head;
    head = nullptr;
}

int main() {
    Node* head = nullptr;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    printCircularList(head);
    deleteList(head);
    return 0;
}
