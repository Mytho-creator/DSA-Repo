
// Binary tree

#include <iostream>
#include<vector>
using namespace std;

class Node{
public:
   int data;
   Node* left;
   Node *right;

   Node(int data){
      this->data = data;
      left = right = NULL;
   }
};

static int idx = -1;

Node*  buildTree(vector<int>newNodes){
    idx++;

    if(newNodes[idx] == -1){
        return NULL;
    }

    Node* currNode  = new Node(newNodes[idx]);

    currNode->left =   buildTree(newNodes);
    currNode->right =   buildTree(newNodes);

    return currNode;
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
    
}

void Inorder(Node* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
    
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
     postorder(root->left);
     postorder(root->right);
     cout<<root->data<<" ";
     
}

int main(){

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);
    cout<<"root :"<<root->data<<endl;

    preorder(root);
    cout<<endl;
    Inorder(root);
     cout<<endl;
    postorder(root);
     cout<<endl;
    return 0;
}