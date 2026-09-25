#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int value) {
    if (root == nullptr) return new Node{value, nullptr, nullptr};
    if (value < root->data) root->left = insert(root->left, value);
    else if (value > root->data) root->right = insert(root->right, value);
    return root;
}

bool search(Node* root, int value) {
    if (root == nullptr) return false;
    if (root->data == value) return true;
    return value < root->data ? search(root->left, value) : search(root->right, value);
}

void inOrder(Node* root) {
    if (root == nullptr) return;
    inOrder(root->left);
    cout << root->data << ' ';
    inOrder(root->right);
}

void deleteTree(Node* root) {
    if (root == nullptr) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    Node* root = nullptr;
    for (int value : {50, 30, 70, 20, 40, 60, 80}) root = insert(root, value);
    inOrder(root);
    cout << "\nFound 60: " << (search(root, 60) ? "yes" : "no") << '\n';
    deleteTree(root);
    return 0;
}
