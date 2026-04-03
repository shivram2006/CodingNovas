#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *left;
    Node *right;


    Node(int val){
        data = val;
        left =NULL;
        right = NULL;
    }

};


class BST{
    public:

    Node *root;

    BST(){
        root = NULL;
    }

    Node *insert(Node *root, int data){
        if(root == NULL){
            return new Node(data);
        }

        if(data < root->data){
            root->left = insert(root->left, data);
        }
        else{
            root->right = insert(root->right,data);
        }

        return root;
    }


    void inOrder(Node *root){
        if(root == NULL){
            return;
        }
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

};


int main(){


    BST tree;

    tree.root = tree.insert(tree.root,10);
    tree.root = tree.insert(tree.root,20);
    tree.root = tree.insert(tree.root,5);

    tree.inOrder(tree.root);




    return 0;
}