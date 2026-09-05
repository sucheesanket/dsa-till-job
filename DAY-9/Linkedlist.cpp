//                   insert at any point of the linked list

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
//         }else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     int nvalue;
//     cin>>nvalue;
//     int pos;
//     cin>>pos;
//     Node* insertnode=new Node(nvalue);
//     if(pos==1){
//         insertnode->next=head;
//         head=insertnode;
//     }else{
//         Node* curr=head;
//         for(int i=1;i<pos-1&&curr!=nullptr;i++){
//             curr=curr->next;
//         }
//         if(curr!=nullptr){
//             insertnode->next=curr->next;
//             curr->next=insertnode;
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


// 🎯 Your first Day-9 challenge

// Take your dynamic linked-list program from yesterday.

// Input:

// 4
// 10 20 30 40

// Then delete the first node.

// Expected:

// 20 -> 30 -> 40 -> NULL




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
//  void deleteatbegin(Node*& head, Node*& tail){
//         if(head==nullptr){
//             return;
//         }
//         Node* temp=head;
//         head=head->next;
//         if(head==nullptr){
//             tail=nullptr;
//         }
//         delete temp;
//     }
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
//     // Node* temp=head;
//     // head=head->next;
    
//     // delete temp;
//     deleteatbegin(head,tail);
   

//     Node* atemp=head;
//     while(atemp!=nullptr){
//         cout<<atemp->n<<" -> ";
//         atemp=atemp->next;
//     }
//     cout<<"NULL";
//     return 0;
// }

// Now let's tackle Delete at End

// Take your time with this one. Draw:

// 10 → 20 → 30 → 40 → NULL

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
// void deleteatend(Node*& head,Node*& tail){
//     if (head==nullptr){
//         return;
//     }
//     if(head==tail){
//         delete head;
//         head=nullptr;
//         tail=nullptr;
//         return;
//     }
//     Node* temp=head;
//     while(temp->next->next!=nullptr){
//         temp=temp->next;
        

//     }
//     Node* oldtail=tail;
//         temp->next=nullptr;
//         tail=temp;
//         delete oldtail;
    
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
//     deleteatend(head,tail);
//     Node* tamp=head;
//     while(tamp!=nullptr){
//         cout<<tamp->n<<" -> ";
//         tamp=tamp->next;
//     }
//     cout<<"NULL";
//     return 0;
// }

// delete at specific position
// 🎯 Delete Node at a Given Position

// Suppose:

// 10 → 20 → 30 → 40 → 50 → NULL

// Delete position 3.

// Expected:

// 10 → 20 → 40 → 50 → NULL

// We're using 1-based positions

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
// void daleteatanypos(Node*& head,Node*& tail,int pos){
//     if(head==nullptr){
//         return;
//     }
//     if(pos==1){
//         Node* temp=head;
//         head=head->next;
//         if(head==nullptr){
//             tail=nullptr;
//         }
//         delete temp;
//         return;
//     }
  
//     if(pos>1){
//         Node* temp=head;
//         for(int i=1;i<pos-1;i++){
//             temp=temp->next;
//         }
//         if(temp==nullptr||temp->next==nullptr){
//             return;
//         }
//         Node* todelete=temp->next;
//         if(todelete==tail){
//             tail=temp;
//         }
//         temp->next=todelete->next;
//         delete todelete;
        
//     }

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


//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     int pos;
//     cin>>pos;
//     daleteatanypos(head,tail,pos);
//     Node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"NULL";

//     return 0;
// }


// Absolutely buddy 🔥 Day 9 — Reverse Linked List ⭐⭐⭐

// This is one of the most important Linked List problems for placements/interviews. Let's understand it properly first, then you’ll write the code yourself.

// 🔄 Reverse a Singly Linked List

// Suppose our linked list is:

// 10 → 20 → 30 → 40 → NULL

// After reversing:

// 40 → 30 → 20 → 10 → NULL

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
// void reverseLinkedList(Node*& head){
//     Node* prev=nullptr;
//     Node* curr=head;
//     Node* next=nullptr;
//     while(curr!=nullptr){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     head=prev;
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
//     reverseLinkedList(head);
//     Node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"NULL";
//     return 0;
// }

// Day 9 — Find the Middle of a Linked List 🐢🐇

// This is an important one because it introduces the Slow & Fast Pointer technique, which we'll reuse later for cycle detection, finding the start of a cycle, etc.

// 🐢🐇 The idea

// Suppose we have:

// 10 → 20 → 30 → 40 → 50 → NULL

// We want:

// 30

// Test it with:

// 5
// 10 20 30 40 50

// Expected:

// 30

// Then also test:

// 4
// 10 20 30 40

// Expected with our approach:

// // 30

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
//     Node* slow=head;
//     Node* fast=head;
//     while(fast!=nullptr&&fast->next!=nullptr){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     cout<<slow->data;
//     return 0;
// }

// 🚀 Next: Detect Cycle in Linked List

// This is where the slow & fast pointer technique becomes really powerful.

// We'll learn Floyd's Cycle Detection Algorithm:

// 10 → 20 → 30 → 40
//           ↑     ↓
//           ← ← ←

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
// bool hascycled(Node*& head){
//     Node* slow=head;
//     Node* fast=head;
//     while(fast!=nullptr&&fast->next!=nullptr){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast){
//             return true;
//         }
//     }
//     return false;
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
//     hascycled(head);
//     return 0;
// }

// Find the starting node of a cycle ⭐⭐⭐
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
Node* hasStartingNode(Node*& head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return nullptr;
    
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
        if (head==nullptr){
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    
    Node* ans= hasStartingNode(head);
    if(ans!=nullptr){
        cout<<"Cycle starts at: "<<ans->data;

    }else{
        cout<<"No cycle";
    }
    return 0;
}