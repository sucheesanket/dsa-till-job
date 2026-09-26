// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         data=val;
//         left=nullptr;
//         right=nullptr;
//     }
// };
// int main(){
//     Node* root=new Node(10);
//     root->left=new Node(5);
//     root->right=new Node(20);
//     root->left->left=new Node(3);
//     root->left->right=new Node(7);
//     return 0;
// }

// 🌳 Tree Practice #2 — Preorder Traversal
// Root → Left → Right

// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         data=val;
//         left=nullptr;
//         right=nullptr;
//     }
// };
// void preOrder(Node* root){
//     if (root==nullptr){
//         return;
//     }
    
//         cout<<root->data<<" ";
//         preOrder(root->left);
//         preOrder(root->right);
    
    

// }
// int main(){
//     Node* root=new Node(10);
//     root->left=new Node(5);
//     root->right=new Node(20);
//     root->left->left=new Node(3);
//     root->left->right=new Node(7);
//     preOrder(root);
//     return 0;
// }

// inorder

// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         data=val;
//         left=nullptr;
//         right=nullptr;
//     }
// };
// void inorder(Node* root){
//     if (root==nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);

// }
// int main(){
//     Node* root=new Node(10);
//     root->left=new Node(5);
//     root->right=new Node(20);
//     root->left->left=new Node(3);
//     root->left->right=new Node(7);
//     inorder(root);
//     return 0;
// }


//postorder

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
void postorder(Node* root){
    if (root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
int main(){
    Node* root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(20);
    root->left->left=new Node(3);
    root->left->right=new Node(7);
    postorder(root);
    return 0;
}