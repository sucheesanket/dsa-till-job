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
void deleteatend(Node*& head,Node*& tail){
    if (head==nullptr){
        return;
    }
    if(head==tail){
        delete head;
        head=nullptr;
        tail=nullptr;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
        

    }
    Node* oldtail=tail;
        temp->next=nullptr;
        tail=temp;
        delete oldtail;
    
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
    deleteatend(head,tail);
    Node* tamp=head;
    while(tamp!=nullptr){
        cout<<tamp->n<<" -> ";
        tamp=tamp->next;
    }
    cout<<"NULL";
    return 0;
}