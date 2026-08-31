// 🎯 Problem 1 — Maximum Sum of K Consecutive Elements

// Given an array and k, find the maximum sum of any k consecutive elements.

// Example
// Input:
// 6
// 2 1 5 1 3 2
// 3

// Windows:

// 2 1 5 → 8
// 1 5 1 → 7
// 5 1 3 → 9
// 1 3 2 → 6

// Output:

// 9
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
//     int maxsum=0;
//     int target;
//     cin>>target;
//     int sum=0;
//     for(int i=0;i<target;i++){
//         sum+=arr[i];
//     }
//     maxsum=sum;
//     for(int i=0;i<n-target;i++){
//         sum=sum-arr[i]+arr[i+target];
//         maxsum=max(sum,maxsum);
//     }
//     cout<<maxsum;
//     return 0;
// }
// understand very well

// 🧩 Problem 2 — Longest Subarray With Sum ≤ K

// Given an array of positive integers and an integer k, find the length of the longest contiguous subarray whose sum is ≤ k.

// Example
// Input:
// 6
// 2 1 5 1 3 2
// 7

// Let's check:

// [2, 1, 5]       sum = 8 ❌
// [1, 5, 1]       sum = 7 ✅ → length 3
// [5, 1]          sum = 6 ✅
// [1, 3, 2]       sum = 6 ✅ → length 3

// So the answer is:

// 3

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
//     int sum=0;
//     int maxlength=0;
//     for(int right=0;right<n;right++){
//         sum+=arr[right];
//         while(sum>target){
//             sum-=arr[left];
//             left++;
//         }
//          maxlength=max(maxlength,right-left+1);
//     }
//     cout<<maxlength;


//     return 0;
// }

// Problem 3 — Longest Substring Without Repeating Characters
// This is a very famous LeetCode problem and an excellent interview problem.
// Example
// Input:
// abcabcbb
// Possible windows:
// abc → length 3
// Then a repeats:
// abca ❌
// We move the left side until the window becomes valid again.
// The answer is:
// 3
// Another:
// bbbbb
// Answer:
// 1
// And:
// pwwkew
// Answer:
// 3

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length()-1;i++){
        
    }
    return 0;
}