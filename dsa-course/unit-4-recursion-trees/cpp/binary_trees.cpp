#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void inOrder(Node* root) {
    if (root == nullptr) return;
    inOrder(root->left);
    cout << root->data << ' ';
    inOrder(root->right);
}

void levelOrder(Node* root) {
    if (root == nullptr) return;
    queue<Node*> nodes;
    nodes.push(root);
    while (!nodes.empty()) {
        Node* current = nodes.front();
        nodes.pop();
        cout << current->data << ' ';
        if (current->left != nullptr) nodes.push(current->left);
        if (current->right != nullptr) nodes.push(current->right);
    }
}

int height(Node* root) {
    if (root == nullptr) return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + max(leftHeight, rightHeight);
}

int main() {
    Node* root = new Node{1, new Node{2, nullptr, nullptr}, new Node{3, nullptr, nullptr}};
    inOrder(root);
    cout << '\n';
    levelOrder(root);
    cout << "\nHeight: " << height(root) << '\n';
    delete root->left;
    delete root->right;
    delete root;
    return 0;
}
