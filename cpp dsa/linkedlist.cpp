#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* link;

    node(int val) {
        data = val;
        link = nullptr;
    }
};

node* insertAtBeginning(node* root, int value) {
    node* freshNode = new node(value);
    freshNode->link = root;
    return freshNode;
}

node* insertAtEnd(node* root, int value) {
    node* freshNode = new node(value);
    if (root == nullptr) {
        return freshNode;
    }

    node* temporary = root;
    while (temporary->link != nullptr) {
        temporary = temporary->link;
    }
    temporary->link = freshNode;
    return root;
}

node* deleteValue(node* root, int value) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->data == value) {
        node* nextNode = root->link;
        delete root;
        return nextNode;
    }

    node* temporary = root;
    while (temporary->link != nullptr && temporary->link->data != value) {
        temporary = temporary->link;
    }
    if (temporary->link != nullptr) {
        node* nodeToDelete = temporary->link;
        temporary->link = nodeToDelete->link;
        delete nodeToDelete;
    }
    return root;
}

bool search(node* root, int value) {
    while (root != nullptr) {
        if (root->data == value) {
            return true;
        }
        root = root->link;
    }
    return false;
}

int countNodes(node* root) {
    int count = 0;
    while (root != nullptr) {
        count++;
        root = root->link;
    }
    return count;
}

node* reverseList(node* root) {
    node* previous = nullptr;
    node* current = root;
    while (current != nullptr) {
        node* nextNode = current->link;
        current->link = previous;
        previous = current;
        current = nextNode;
    }
    return previous;
}

void display(node* root) {
    if (root == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    while (root != nullptr) {
        cout << root->data << " ";
        root = root->link;
    }
    cout << endl;
}

void deleteList(node* root) {
    while (root != nullptr) {
        node* nextNode = root->link;
        delete root;
        root = nextNode;
    }
}

int main() {
    node* root = nullptr;
    int choice;

    do {
        cout << "\n1. Insert at beginning\n"
             << "2. Insert at end\n"
             << "3. Delete a value\n"
             << "4. Search a value\n"
             << "5. Reverse list\n"
             << "6. Count nodes\n"
             << "7. Display\n"
             << "8. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        int value;
        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            root = insertAtBeginning(root, value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            root = insertAtEnd(root, value);
            break;
        case 3:
            cout << "Enter value to delete: ";
            cin >> value;
            root = deleteValue(root, value);
            break;
        case 4:
            cout << "Enter value to search: ";
            cin >> value;
            cout << (search(root, value) ? "Value found" : "Value not found") << endl;
            break;
        case 5:
            root = reverseList(root);
            cout << "List reversed" << endl;
            break;
        case 6:
            cout << "Number of nodes: " << countNodes(root) << endl;
            break;
        case 7:
            display(root);
            break;
        case 8:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 8);

    deleteList(root);
    return 0;
}