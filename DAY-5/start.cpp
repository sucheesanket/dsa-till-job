// 🎯 Problem 1 — Frequency of Array Elements

// Given an array, print the frequency of each element.

// Input
// 7
// 4 2 4 3 2 4 3

// Expected frequencies:

// 4 → 3
// 2 → 2
// 3 → 2



// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     unordered_map<int,int> freq;
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(auto x : freq){
//         cout<<x.first<<" -> "<<x.second<<endl;
//     }

//     return 0;
// }

// 🧠 Day 5 — Problem 2: Single Number

// Now let's make hashing useful for an actual placement problem.

// You are given an array where:

// Every element appears exactly twice except one element, which appears only once. Find that element.

// Example 1
// Input:
// 5
// 2 2 1 4 4

// Output:

// 1

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int main(){
//     int m;
//     cin>>m;
//     vector<int>arr(m);
//     for (int i=0;i<m;i++){
//         cin>>arr[i];
//     }
//     unordered_map<int,int> freq;
//     for(int i=0;i<m;i++){
//         freq[arr[i]]++;
        
//     }
//     for(int i=0;i<m;i++){
//         if(freq[arr[i]]==1){
//             cout<<arr[i];
//             return 0;
//         }
//     }

//     return 0;
// }

// we can do this without using the hashing with the help of xor
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
//     int result=0;
//     for(int i=0;i<n;i++){
//         result=result^arr[i];
//     }
//     cout<<result;
//     return 0;
// }

// 🚀 Problem 4 — Two Sum Again, But Think Differently

// You've already solved Two Sum using unordered_map earlier.

// Now we're going to revisit it because repetition is intentional.

// Given an array and a target, return the indices of two elements whose sum equals the target.

// Example
// arr = [2, 7, 11, 15]
// target = 9

// Output:

// 0 1

// #include<iostream>
// #include<vector>
// #include<unordered_map>
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
//     int needed;
//     unordered_map<int,int> freq;
//     for(int i=0;i<n;i++){
//         needed=target-arr[i];
//         if(freq.find(needed)!=freq.end()){
//             cout<<freq[needed]<<" "<<i;
//             return 0;
//         }
//         freq[arr[i]]=i;

//     }
//     cout<<"Not found";
//     return 0;
// 
// }

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
//     while(left<right){
//         int sum=arr[left]+arr[right];
//         if(sum==target){
//             cout<<left<<" "<<right;
//             return 0;
//         }
//         else if(target>sum){
//             left++;
            
//         }
//         else{
//             right--;
            
//         }
//     }
//     return 0;
// }
// 🧠 This is exactly the decision-making skill I want you to develop

// When you see Two Sum, don't immediately think:

// "I know Two Sum → write my code."

// Instead ask:

// Step 1

// Is the array sorted?

// YES → Two Pointers is possible
// NO  → Hash Map is usually better
// Step 2

// Do I need original indices?

// YES → Hash Map is very convenient
// NO  → Sorting + Two Pointers may be possible
// Step 3

// What complexity does the question demand?

// O(n) → Hash Map
// O(n log n) → Sort + Two Pointers
// O(1) extra space → Two Pointers if sorted
// ⭐ Compare your two solutions
// 	Hash Map	Two Pointers
// Unsorted array	✅	❌
// Sorted array	✅	✅
// Original indices	✅ Easy	⚠️ Sorting can lose them
// Time	O(n) avg	O(n) if already sorted
// Extra space	O(n)	O(1)
// Main pattern	Hashing	Two Pointers

// 🎯 Problem 5A — Build Prefix Sum

// For now, don't worry about queries.

// Given:

// 5
// 2 4 1 5 3

// Output:

// 2 6 7 12 15

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
//     for(int i=1;i<n;i++){
//         arr[i]=arr[i]+arr[i-1];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// 🚀 Problem 5B — Range Sum Query

// Now let's actually use Prefix Sum.

// Given an array and q queries. For each query, return the sum from index L to R.

// 🎯 Your task

// Write the complete program.

// Input
// 5
// 2 4 1 5 3
// 3
// 1 3
// 0 2
// 2 4
// Output
// 10
// 7
// 9
// 


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
        arr[i]=arr[i]+arr[i-1];
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    int target;
    cin>>target;
    return 0;
}
