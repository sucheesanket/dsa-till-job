// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     stack<int> st;
//     for(int i=0;i<n;i++){
//        int x;
//        cin>>x;
//        st.push(x);

//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     return 0;
// }

// 🔥 Stack Practice #2 — Reverse a String

// Write a program that takes a string and reverses it using a stack.

// Example

// Input:

// hello

// Output:

// olleh


// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;
// int main(){
//     string n;
//     cin>>n;
//     stack<char> st;
//     for(int i=0;i<n.length();i++){
//         st.push(n[i]);
//     }
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }

//     return 0;
// }

// 🔥 Queue Practice #1

// Same style as our first Stack program.

// Take n integers, insert them into a queue, then print and remove them one by one.

// Example

// Input:

// 5
// 10 20 30 40 50

// Output:

// 10 20 30 40 50

// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     queue<int> q;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         q.push(x);
//     }
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     return 0;
// }

// Queue Practice #2 🔥

// Now let's do something slightly more useful:

// Find the maximum element in a queue without losing the elements.

// Input:
// 5
// 10 40 20 70 30

// Output:
// 70

// #include<iostream>
// #include<queue>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     int max=INT_MIN;
//     cin>>n;
//     queue<int> q;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         q.push(x);
//     }
//     while(!q.empty()){
//         if(q.front()>max){
//             max=q.front();
            
//         }
//         q.pop();

//     }
//     cout<<max<<" ";
//     return 0;
// }

