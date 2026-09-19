//insert at beginning
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data=val;
        prev=nullptr;
        next=nullptr;
    }
};
void insertatbegin(Node*& head,Node*& tail,int val){
    Node* insertbeg=new Node(val);
    if(head==nullptr){
        head=insertbeg;
        tail=insertbeg;
        return;
    }
    insertbeg->next=head;
    head->prev=insertbeg;
    head=insertbeg;
    

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
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
    }
    int begval;
    cin>>begval;
    insertatbegin(head,tail,begval);
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" -><- ";
        temp=temp->next;
    }
    return 0;

}