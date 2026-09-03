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
//     int n;
//     cin>>n;
//     Node* head=nullptr;
//     Node* tail=nullptr;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;

//         Node* newnode=new Node(value);
//         if(head==nullptr){
//             head=newnode;
//             tail=newnode;
//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     Node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->n<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"NULL";
//     return 0;
// }

// practice

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
//     int n;
//     cin>>n;
//     Node* head=nullptr; 
//     Node* tail=nullptr; 
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         Node* newnode=new Node(value);
//         if(head==nullptr){
//             head=newnode;
//             tail=newnode;

//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     Node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->n<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"NULL";
//     return 0;
// }

// Problem 5 — Insert at Beginning

// Suppose input:

// 5
// 10 20 30 40 50

// Our list:

// head
//  ↓
// 10 → 20 → 30 → 40 → 50 → NULL

// Now user gives:

// 5

// We want:

// head
//  ↓
// 5 → 10 → 20 → 30 → 40 → 50 → NULL

// For example:

// Input:
// 4
// 10 20 30 40
// 5

// Output:
// 5 -> 10 -> 20 -> 30 -> 40 -> NULL

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
//     int n;
//     cin>>n;
//     Node* head=nullptr;
//     Node* tail=nullptr;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         Node* newnode=new Node(value);
//         if(head==nullptr){
//             head=newnode;
//             tail=newnode;
//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     int nvalue;
//     cin>>nvalue;
//     Node* newnb=new Node(nvalue);
//     newnb->next=head;
//     head=newnb;
    
//     Node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->n<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"NULL";
//     return 0;
// }

// 🔥 Next: Insert at End

// Example:

// Input:
// 4
// 10 20 30 40
// 50

// Output:

// 10 -> 20 -> 30 -> 40 -> 50 -> NULL


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
//     int n;
//     cin>>n;
//     Node* head=nullptr;
//     Node* tail=nullptr;
    
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         Node* newnode=new Node(value);
//         if(head==nullptr){
//             head=newnode;
//             tail=newnode;
//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     int nvalue;
//     cin>>nvalue;
//     Node* newne=new Node(nvalue);
//     tail->next=newne;
//     tail=newne;
//     Node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->n<<" -> ";
//         temp=temp->next;

//     }
//     cout<<"NULL";
//     return 0;
// }

// 🚀 Next: Insert at a Specific Position

// Now we're getting into the real stuff.

// Input:
// 4
// 10 20 30 40
// 25
// 3

// Output:

// 10 -> 20 -> 25 -> 30 -> 40 -> NULL


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
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    int nvalue;
    cin>>nvalue;
    int pos;
    cin>>pos;
    Node* insertnode=new Node(nvalue);
    if(pos==1){
        insertnode->next=head;
        head=insertnode;
    }else{
        Node* curr=head;
        for(int i=1;i<pos-1&&curr!=nullptr;i++){
            curr=curr->next;
        }
        if(curr!=nullptr){
            insertnode->next=curr->next;
            curr->next=insertnode;
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