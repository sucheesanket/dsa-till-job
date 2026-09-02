// #include<iostream>
// using namespace std;
// struct Node{
//     int n;
//     Node* next;

//     Node(int val){
//         n=val;
//         next=nullptr;
//     }
    
// };
// int main(){
//     Node* firstnode=new Node(10);
//     Node* secondnode=new Node(20);
//     firstnode->next=secondnode;
//     cout<<firstnode->n<<"->"<<secondnode->n;
//     return 0;
// }

// 🎯 Problem 3 — Traverse the Linked List

// Given:

// 10 → 20 → 30 → 40 → NULL

// Expected output:

// 10 -> 20 -> 30 -> 40 -> NULL
// #include<iostream>
//               using hardcoded input 
// using namespace std;
// struct Node{
//     int n;
//     Node* next;

//     Node(int val){
//         n=val;
//         next=nullptr;
//     }
// };
// int main(){
//     Node* firstnode=new Node(10);
//     Node* secondnode=new Node(20);
//     Node* thirdnode=new Node(30);
//     Node* fourthnode=new Node(40);
//     firstnode->next=secondnode;
//     secondnode->next=thirdnode;
//     thirdnode->next=fourthnode;
//     // fourthnode->next=nullptr;

//     Node* head=firstnode;
//     Node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->n<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"NULL";
//     return 0;
// }

//           using dynamic value 
#include<iostream>
using namespace std;
struct Node{
    int n;
    Node* next;

    Node(int val){
        n=val;
        next=nullptr;
    }
};
int main(){
    int n;
    cin>>n;
    Node* head=nullptr;
    Node* tail=nullptr;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;

        Node* newnode=new Node(value);
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->n<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
    return 0;
}