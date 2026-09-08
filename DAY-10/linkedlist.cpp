// Let's go buddy 🔥 Day 9 — Merge Two Sorted Linked Lists

// This is another very important placement/interview problem. The good news: once you understand the pointer movement, the code is quite short.

// 🔗 Problem

// We have two sorted linked lists:

// List 1:
// 1 → 3 → 5 → 7 → NULL

// List 2:
// 2 → 4 → 6 → 8 → NULL

// We need to merge them into one sorted linked list:

// 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → NULL

// You can use the dummy node technique we just learned.

// For testing, create:

// List 1: 1 3 5 7
// List 2: 2 4 6 8

// Expected:

// 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → NULL

// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=nullptr;
//     }
// };
// Node* mergetwolist(Node*& head1,Node*& head2){
//     Node* p1=head1;
//     Node* p2=head2;

//     Node dummy(0);
//     Node* tail=&dummy;

    
//     while(p1!=nullptr&&p2!=nullptr){
//         if(p1->data<=p2->data){
//             tail->next=p1;
//             p1=p1->next;
//         }else{
//             tail->next=p2;
//             p2=p2->next;
//         }
//         tail=tail->next;
//     }
//     if(p1!=nullptr){
//         tail->next=p1;
//     }else{
//         tail->next=p2;
//     }
//     return dummy.next;


// }
// int main(){
//     int n1;
//     cin>>n1;
//     int n2;
//     cin>>n2;
//     Node* head1=nullptr;
//     Node* tail1=nullptr;
//     for(int i=0;i<n1;i++){
//         int value1;
//         cin>>value1;
//         Node* newnode1=new Node(value1);
//         if(head1==nullptr){
//             head1=newnode1;
//             tail1=newnode1;
//         }else{
//             tail1->next=newnode1;
//             tail1=newnode1;
//         }
//     }
//     Node* head2=nullptr;
//     Node* tail2=nullptr;
//     for(int i=0;i<n2;i++){
//         int value2;
//         cin>>value2;
//         Node* newnode2=new Node(value2);
//         if(head2==nullptr){
//             head2=newnode2;
//             tail2=newnode2;
//         }else{
//             tail2->next=newnode2;
//             tail2=newnode2;
//         }
//     }
//     Node* mergedhead= mergetwolist(head1,head2);
//     Node* temp=mergedhead;
//     while(temp!=nullptr){
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"NULL";
    
//     return 0;
// }

// 🚀 Day 10 — Remove Nth Node From End

// Test:

// List:
// 1 2 3 4 5

// n = 2

// Expected:

// 1 → 2 → 3 → 5 → NULL

// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=nullptr;
//     }
// };
// Node* removeNthfromend(Node*& head,int n){
//     Node dummy(0);
//     dummy.next=head;

//     Node* fast=&dummy;
//     Node* slow=&dummy;
//     for(int i=0;i<n;i++){
//         fast=fast->next;
//     }
//     while(fast->next!=nullptr){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     Node* todelete=slow->next;
//     slow->next=todelete->next;
//     delete todelete;

//     return dummy.next;
    

// }
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
//         }else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     int target;
//     cin>>target;
//     Node* removehead=removeNthfromend(head,target);
//     Node* temp=removehead;
//     while(temp!=nullptr){
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"NULL";

//     return 0;
// }

// 🚀 Next Problem: Palindrome Linked List

// This one is interesting because we'll combine two techniques you've already learned:

// Find Middle 🐢🐇 + Reverse Linked List 🔄

// Test these:
// 1 → 2 → 3 → 2 → 1

// Expected:

// true
// 1 → 2 → 2 → 1

// Expected:

// true
// 1 → 2 → 3 → 4

// Expected:

// false
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
Node* reverselist(Node* head){
    Node* prev=nullptr;
    Node* curr=head;
    while(curr!=nullptr){
        Node* nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    return prev;

}
bool ispalindrome(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }

   
    Node* second;
    if(fast!=nullptr){
        second=slow->next;
    }else{
        second=slow;
    }
    second=reverselist(second);
    Node* first=head; 
   
    while(second!=nullptr){
        if(first->data!=second->data){
            return false;
        }
        first=first->next;
        second=second->next;
       
    }
   
    return true;
    
}
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

     
    if(ispalindrome(head)) {
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}