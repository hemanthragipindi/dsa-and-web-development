#include<iostream>
using namespace std ;
struct node {
    int data;
    node* next;
};

node* top = nullptr;

void push(int value) {
    node* freshnode = new node{value, top};
    top = freshnode;
}

int pop() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return -1;
    }

    node* temporary = top;
    int value = temporary->data;
    top = top->next;
    delete temporary;
    return value;
}