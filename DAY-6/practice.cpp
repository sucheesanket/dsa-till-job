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

// #include<iostream>
// #include<string>
// #include<unordered_set>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     unordered_set<char> st;
//     int left=0;
//     int maxlength=0;
//     for(int right=0;right<s.length();right++){
//         while(st.find(s[right])!=st.end()){
//             st.erase(s[left]);
//             left++;
//         }
//         st.insert(s[right]);
//         maxlength=max(maxlength,right-left+1);

        
        
//     }
    
//     cout<<maxlength;
//     return 0;
// }

// 🧩 Problem 4 — Maximum Number of Vowels in a Substring
// Given a string s and an integer k, find the maximum number of vowels in any substring of length k.
// Test 1
// abciiidef
// 3
// Expected:
// 3
// Test 2
// aeiou
// 2
// Expected:
// 2
// Test 3
// leetcode
// 3
// Expected:
// 2
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// bool isVowel(char c){
//     return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
//            c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
// }

// int main(){
//     string s;
//     cin >> s;

//     int k;
//     cin >> k;

//     int vowels = 0;

//     // Count vowels in the first window
//     for(int i = 0; i < k; i++){
//         if(isVowel(s[i])){
//             vowels++;
//         }
//     }

//     int max_vowels = vowels;

//     // Slide the window
//     for(int i = k; i < s.length(); i++){

//         // Remove the character leaving the window
//         if(isVowel(s[i-k])){
//             vowels--;
//         }

//         // Add the character entering the window
//         if(isVowel(s[i])){
//             vowels++;
//         }

//         max_vowels = max(max_vowels, vowels);
//     }

//     cout << max_vowels;

//     return 0;
// }


// 🧩 Problem 5 — Minimum Size Subarray Sum

// Given an array of positive integers and a target, find the minimum length of a contiguous subarray whose sum is greater than or equal to the target
// Test these:
// 6
// 2 3 1 2 4 3
// 7

// → 2

// 3
// 1 4 4
// 4

// → 1

// 5
// 1 1 1 1 1
// 10

// → 0

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int left=0;
//     int sum=0;
//     int min_length=INT_MAX;
//     int k;
//     cin>>k;
    
//     for(int right=0;right<n;right++){
//         sum+=arr[right];
//         while(sum>=k){
//             min_length=min(min_length,right-left+1);
//             sum-=arr[left];
//             left++;

//         }
//     }
//     if(min_length==INT_MAX){
//         cout<<0;
//     }
//     else{

//         cout<<min_length;
//     }
//     return 0;
// }