// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello world";
//     return 0;
// }
// 🧩 Problem 1 — Binary Search

// Given a sorted array and a target, return its index.

// Example
// Input:
// 7
// 1 3 5 7 9 11 13
// 9

// Output:

// 4
// Test:

// 7
// 1 3 5 7 9 11 13
// 9

// → 4

// and:

// 7
// 1 3 5 7 9 11 13
// 8

// → -1

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int left=0;
//     int right=n-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(arr[mid]==target){
//             cout<<mid;
//             return 0;

//         }
//         else if(target>arr[mid]){
//             left=mid+1;
//         }
//         else{
//             right=mid-1;
//         }
//     }
//     cout<<-1;
//     return 0;
// }

// 🧩 Problem 2 — Search Insert Position

// Now we'll make a small but very important modification.

// Given a sorted array and a target:

// Return the index where the target exists.
// If it doesn't exist, return the position where it should be inserted to maintain sorted order.

// Example 1
// arr = [1, 3, 5, 6]
// target = 5

// Output:

// 2

// Because 5 is already at index 2.

// Example 2
// arr = [1, 3, 5, 6]
// target = 2

// Output:

// 1

// Because:

// [1, 2, 3, 5, 6]
//     ↑
//   index 1
// Example 3
// arr = [1, 3, 5, 6]
// target = 7

// Output:

// 4

// It should be inserted after 6.

// Example 4
// arr = [1, 3, 5, 6]
// target = 0

// Output:

// // 0

// #include<iostream>
// #include<vector>
// // #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
    
//     int left=0;
//     int right=n-1;

//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(target==arr[mid]){
//             cout<<mid;
//             return 0;
//         }
//         else if(target>arr[mid]){
//             left=mid+1;
//         }
//         else{
//             right=mid-1;
//         }
//     }
//     cout<<left;
    
//     return 0;
// }

// 🧩 Problem 3 — First Occurrence

// Now we're going to modify Binary Search again.

// Given a sorted array that can contain duplicates, find the first occurrence of the target.

// Example
// Input:
// 8
// 1 2 2 2 3 4 5 5
// 2

// Output:

// 1

// Because:

// index:  0 1 2 3 4 5 6 7
// array:  1 2 2 2 3 4 5 5
//           ↑
//        first 2
// Another example
// Input:
// 7
// 1 3 3 3 5 7 9
// 3

// Output:

// 1
// If target doesn't exist
// Input:
// 5
// 1 2 4 5 7
// 3

// Output:

// -1
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int left=0;
//     int right=n-1;
//     int ans=-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(target==arr[mid]){
//             ans=mid;
//             right=mid-1;
//         }
//         else if(target>arr[mid]){
//             left=mid+1;
//         }else{
//             right=mid-1;
//         }
        
        

//     }
//     cout<<ans;
//     return 0;
// }

// 🧩 Problem 4 — Last Occurrence

// Now let's reverse the idea.

// Given a sorted array containing duplicates, find the last occurrence of the target.

// Example
// Input:
// 8
// 1 2 2 2 3 4 5 5
// 2

// Output:

// 3

// Because:

// index:  0 1 2 3 4 5 6 7
// array:  1 2 2 2 3 4 5 5
//           ↑     ↑
//         first  last
// Example 2
// Input:
// 7
// 1 3 3 3 5 7 9
// 3

// Output:

// 3
// Example 3
// Input:
// 5
// 1 2 4 5 7
// 3

// Output:

// -1

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int left=0;
//     int right=n-1;
//     int ans=-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(target==arr[mid]){
//             ans=mid;
//             left=mid+1;
//         }
//         else if(target>arr[mid]){
//             left=mid+1;
//         }else{
//             right=mid-1;
//         }
        
        

//     }
//     cout<<ans;
//     return 0;
// }

// 🎯 Problem 5 — Count Occurrences

// Now let's combine the two problems you just solved.

// Given a sorted array with duplicates, find how many times a target occurs.

// Example 1
// Input:
// 8
// 1 2 2 2 3 4 5 5
// 2

// Output:

// 3

// Because 2 occurs at:

// index 1
// index 2
// index 3

// So:

// last occurrence - first occurrence + 1
// = 3 - 1 + 1
// = 3
// Example 2
// Input:
// 7
// 1 3 3 3 5 7 9
// 3

// Output:

// 3
// Example 3
// Input:
// 5
// 1 2 4 5 7
// 3

// Output:

// 0

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int left=0;
//     int right=n-1;
//     int first=-1;
//     int last=-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(target==arr[mid]){
//             last=mid;
//             left=mid+1;
           
//         }
        
//         else if(target>arr[mid]){
//             left=mid+1;
//         }else{
//             right=mid-1;
//         }
        
        

//     }
//     left=0;
//     right=n-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(target==arr[mid]){
//             first=mid;
//             right=mid-1;
           
//         }
        
//         else if(target>arr[mid]){
//             left=mid+1;
//         }else{
//             right=mid-1;
//         }
        
        

//     }
//     if(first==-1){
//         cout<<0;
//     }
//     else{
//         cout<<last-first+1;
//     }
//     return 0;
// }


// 🧩 DAY 3 FINAL CHALLENGE

// Now I'm removing the hints completely.

// I want to test whether you can recognize the algorithm yourself.

// Problem — Find Peak Element

// Given an array, find an element that is greater than its neighboring elements.

// For this problem, assume:

// arr[-1] = -∞
// arr[n] = -∞

// So the first/last element can also be a peak.

// Example 1
// [1, 2, 3, 1]

// Output could be:

// 2

// because:

// 1 < 3 > 1

// Index 2 is a peak.

// Example 2
// [1, 2, 1, 3, 5, 6, 4]

// Valid answers include:

// 1

// because 2 > 1 and 2 > 1.

// Or:

// 5

// because 6 > 5 and 6 > 4.

// Either valid peak index is acceptable
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            cout<<i;
            return 0;
        }
    }
    return 0;
}