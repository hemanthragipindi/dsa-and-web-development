#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node* link;
    node(int val){
        data=val;
        link=NULL;
    }


};
node* insertatBeg(node* root,int value){
    node* freshnode=new node(value);
    if(root==NULL){
        root=freshnode;
    }
    else{
        freshnode->link=root;
        root=freshnode;
    }
    return root;
}
node* insertatEnd(node* root,int value){
    node* freshnode=new node(value);
    if(root==NULL){
        root=freshnode;
    }
    else{
        node* temp=root;
        while(temp->link!=NULL){
            temp=temp->link;
        }
        temp->link=freshnode;
    }
    return root;
}
void display(node* root){
    node* temp=root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
};
while(true){
    cout<<"1. Insert at beginning"<<endl;
    cout<<"2. Insert at end"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            int val1;
            cout<<"Enter value to insert at beginning: ";
            cin>>val1;
            root=insertatBeg(root,val1);
            break;
        case 2:
            int val2;
            cout<<"Enter value to insert at end: ";
            cin>>val2;
            root=insertatEnd(root,val2);
            break;
        case 3:
            display(root);
            break;
        case 4:
            exit(0);
        default:
            cout<<"Invalid choice"<<endl;
    }
}