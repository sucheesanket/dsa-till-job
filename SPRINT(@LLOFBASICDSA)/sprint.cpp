// 🧠 Problem 1 — Arrays
// Find the second largest distinct element

// Given an array of n integers, find the second largest distinct element.

// Example 1
// Input:
// 6
// 10 5 20 8 20 15

// Output:
// 15

// Because:

// Largest = 20
// Second largest distinct = 15
// Example 2
// Input:
// 5
// 7 7 7 7 7

// Output:
// No second largest element

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     int max=arr[0];
//     int sec_max=INT_MIN;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(arr[i]>max){
//             sec_max=max;
//             max=arr[i];

//         }else if(arr[i]<max&&arr[i]>sec_max){
//             sec_max=arr[i];

//         }
//     }
//     cout<<sec_max;

//     return 0;
// }

// Problem 2: Longest Consecutive Sequence 🔥

// Given an unsorted array, find the length of the longest sequence of consecutive integers.

// Example:

// Input:
// 6
// 100 4 200 1 3 2

// Output:
// 4

// Because:

// 1 2 3 4

// has length 4.

// Another:

// Input:
// 7
// 9 1 4 7 3 2 6

// Output:
// 4

// because:

// 1 2 3 4

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<unordered_set>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     unordered_set<int> s(arr.begin(),arr.end());
//     int longestleng=0;

//     for(int i=0;i<n;i++){
//         if(s.find(arr[i]-1)==s.end()){
//             int currentnum=arr[i];
//             int currentleng=1;

//             while(s.find(currentnum+1)!=s.end()){
//                 currentnum++;
//                 currentleng++;
//             }
//             longestleng=max(longestleng,currentleng);

//         }

//     }
//     cout<<longestleng<<endl;

//     return 0;
// }

// Problem 3 — Sliding Window
// Example:

// Input:
// 6
// 2 1 5 1 3 2
// 3

// Output:

// 9
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     int sum=0;

//     for(int i=0;i<k;i++){
//         sum+=arr[i];

//     }
//     int maxsum=sum;
//     for(int i=0;i<n-k;i++){
//         sum=sum-arr[i]+arr[i+k];
//         maxsum=max(sum,maxsum);
//     }
//     cout<<maxsum;
//     return 0;
// }

// Problem 4 — Linked List

// Now we're switching topics so you don't become dependent on one pattern.

// Reverse a Singly Linked List

// Given:

// 1 → 2 → 3 → 4 → nullptr

// reverse it to:

// 4 → 3 → 2 → 1 → nullptr
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
// void reverse(Node*& head){
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
//     cout<<"Before reverseing the linked list:"<<endl;
//     Node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
//     cout<<"After reverseing the linked list:"<<endl;
//     reverse(head);
//     Node* temp2=head;
//     while(temp2!=nullptr){
//         cout<<temp2->data<<" -> ";
//         temp2=temp2->next;
//     }
//     cout<<"NULL";

//     return 0;
// }

// 🎯 Problem 5 — Linked List

// Let's make this one slightly harder.

// Find the Middle of a Linked List

// Given:

// 1 → 2 → 3 → 4 → 5

// Output:

// 3

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
// void middle(Node*& head){
//     Node* slow=head;
//     Node* fast=head;
//     while(fast!=nullptr&&fast->next!=nullptr){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     cout<<slow->data;
//     return ;

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

//     middle(head);
//     return 0;
// }
// Problem 6 — Detect a Cycle in a Linked List

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
//     bool cycle=hascycled(head);
//     if(cycle==true){
//         cout<<"Linked list has cycle.";
//     }else{
//         cout<<"Linked list does not have any cycle.";
//     }
//     return 0;

// }

// 🔥 Problem 7 — Valid Parentheses

// You will give one string containing only:

// ( ) { } [ ]

// Your program checks whether every opening bracket has the correct closing bracket.

// Example 1

// Input:

// ()

// Output:

// Balanced
// Example 2

// Input:

// ()[]{}

// Output:

// Balanced

// Because:

// () → correct
// [] → correct
// {} → correct
// Example 3

// Input:

// ([{}])

// Output:

// // Balanced
// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     stack<char> st;
//     bool balance = true;

//     for(char ch : s){

//         // Opening bracket
//         if(ch == '(' || ch == '{' || ch == '['){
//             st.push(ch);
//         }

//         // Closing bracket
//         else{
//             if(st.empty()){
//                 balance = false;
//                 break;
//             }

//             if((ch == ')' && st.top() == '(') ||
//                (ch == '}' && st.top() == '{') ||
//                (ch == ']' && st.top() == '[')){

//                 st.pop();
//             }
//             else{
//                 balance = false;
//                 break;
//             }
//         }
//     }

//     // Opening brackets still remaining
//     if(!st.empty()){
//         balance = false;
//     }

//     if(balance){
//         cout << "Balanced";
//     }
//     else{
//         cout << "Not Balanced";
//     }

//     return 0;
// }

// 🎯 Problem 8 — Queue

// Let's switch again.

// First Non-Repeating Character

// Given a string, find the first character that appears only once.

// Examples:

// Input:
// aabbcdde

// Output:
// c
// #include<iostream>
// #include<string>
// #include<unordered_map>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     unordered_map<char,int> mp;
//     for(int i=0;i<s.length();i++){
//         mp[s[i]]++;
//     }
//     for(int i=0;i<s.length();i++){
//         if(mp[s[i]]==1){
//             cout<<s[i];

//             return 0;
//         }
//     }
//     cout<<"No unique character";
//     return 0;

// }

// 🎯 Problem 9 — Binary Search

// Let's now test whether you can recognize binary search + boundary handling.

// Given a sorted array and a target, find the first occurrence of that target.

// Example 1
// Input:
// 8
// 1 2 2 2 3 4 5 6
// 2

// Output:
// 1

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     int left = 0;
//     int right = arr.size() - 1;
//     int answer = -1;

//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target)
//         {
//             answer = mid;
//             right = mid - 1;
//         }
//         else if (arr[mid] < target)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }

//     cout << answer;

//     return 0;
// }

// Problem 10 — Binary Tree

// Let's go back to trees.

// Given a binary tree, find its height.

// For:

//         10
//        /  \
//       5    20
//      / \
//     3   7

// the height measured in number of nodes on the longest root-to-leaf path is:

// 3

// because:

// 10 → 5 → 3

// has 3 nodes

#include<iostream>
#include<algorithm>
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
int height(Node* root){
    if(root==nullptr){

        return 0;
    }
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    return 1+max(leftheight,rightheight);

}
int main(){
    Node* root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(20);
    root->left->left=new Node(3);
    root->left->right=new Node(7);
    cout<<height(root);

    return 0;
}