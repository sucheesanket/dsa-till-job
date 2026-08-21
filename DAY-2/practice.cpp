// 🧠 Problem 1 — Count Character Frequency

// Given a string, count how many times each character occurs.

// Example
// Input:
// banana

// Expected:

// b = 1
// a = 3
// n = 2

// Another:

// Input:
// hello

// Expected frequencies:

// h = 1
// e = 1
// l = 2
// o = 1

// #include<iostream>
// #include<string>
// #include<unordered_map>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     unordered_map<char,int> freq;
//     for(int i=0;i<s.length();i++){
//         freq[s[i]]++;
//     }
//     for(auto x : freq){
//         cout<<x.first<<" = "<<x.second<<endl;
//     }
//     return 0;
// }

// 🧩 Problem 2 — First Non-Repeating Character

// Now we're going to use the same frequency-map pattern, but this time you need to combine it with another traversal.

// Given a string, find the first character that occurs exactly once.

// Example 1
// Input:
// leetcode

// Frequencies:

// l → 1
// e → 3
// t → 1
// c → 1
// o → 1
// d → 1

// The first character whose frequency is 1 is:

// l

// Output:

// l
// Example 2
// Input:
// loveleetcode

// Output:

// v
// Example 3
// Input:
// aabbcc

// Output:

// No unique character

// #include<iostream>
// #include<string>
// #include<unordered_map>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     unordered_map<char,int> freq;
//     for(int i=0;i<s.length();i++){
//         freq[s[i]]++;
        

//     }
//     for(int i=0;i<s.length();i++){
//         if(freq[s[i]]==1){
//             cout<<s[i];
//             return 0;

//         }
//     }
//       cout<<"No unique character";
   
//     return 0;
// }


// 🧩 Problem 3 — Valid Anagram

// Now we're going one level up.

// Given two strings, determine whether they are anagrams.

// Two strings are anagrams if they contain the same characters with the same frequencies, just potentially in a different order.

// Example 1
// s = "listen"
// t = "silent"

// Output:

// // Anagram
// Example 2
// s = "hello"
// t = "world"

// Output:

// Not Anagram

// #include<iostream>
// #include<string>
// #include<unordered_map>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin>>s1;
//     cin>>s2;
//     unordered_map<char,int> freq;
//     if(s1.length()!=s2.length()){
//         cout<<"Not Anagram";
//         return 0;

//     }

//     for(int i=0;i<s1.length();i++){
//         freq[s1[i]]++;

//     }
//     for(int i=0;i<s2.length();i++){
//         freq[s2[i]]--;
//     }
//     for(int i=0;i<s1.length();i++){

//         if(freq[s1[i]]!=0){
//             cout<<"Not Anagram";
//             return 0;
//         }
//     }
//     cout<<"Anagram";
//     return 0;
// }

// 🚀 Problem 4 — Choose the Pattern Yourself

// Now I'm removing the training wheels. 😎

// I'm not going to tell you whether to use Hash Map, Two Pointers, or something else.

// Problem: Valid Palindrome String

// Given a string, determine whether it is a palindrome.

// But there's a twist:

// Ignore spaces
// Ignore punctuation
// Ignore uppercase/lowercase differences
// Example 1
// A man, a plan, a canal: Panama

// Output:

// Palindrome

// Because after ignoring spaces/punctuation and case:

// amanaplanacanalpanama

// is a palindrome.

// Example 2
// race a car

// Output:

// Not Palindrome
// Example 3
// Madam

// Output:

// Palindrome
// Example 4
// hello

// Output:

// Not Palindrome

// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;
// int main(){
//     string s;
//     // cin>>s;
//     getline(cin,s);
//     int left=0;
//     int right=s.length()-1;
//     while(left<right){
//         if(!isalnum(s[left])){
//             left++;
//             continue;
//         }
//         else if(!isalnum(s[right])){
//             right--;
//             continue;
//         }
//        s[left]= tolower(s[left]);
//        s[right]= tolower(s[right]);
//         if(s[left]==s[right]){
//             left++;
//             right--;
//         }
//         else{
//             cout<<"Not Palindrome";
//             return 0;
//         }
//     }
//     cout<<"Palindrome";
//     return 0;
// }

// 🧩 Problem 5 — Longest Consecutive Character? No. Let's step up.

// I want one more problem today that combines Hashing + problem interpretation.

// Find the Most Frequent Character

// Given a string, find the character that occurs the most number of times.

// Example
// Input:
// banana

// Frequencies:

// b → 1
// a → 3
// n → 2

// Output:

// a

// Another:

// Input:
// hello

// Frequencies:

// h → 1
// e → 1
// l → 2
// o → 1

// Output:

// l
// If there is a tie

// For now, return the character that appears first in the original string.

// Example:

// abcab

// Frequencies:

// a → 2
// b → 2
// c → 1

// a and b tie, but a appears first.

// Output:

// a

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int> freq;
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;

    }
    int maxfrequency=0;
    char answer=s[0];
    // int largest=s[0];
    for(int i=0;i<s.length();i++){
        if(freq[s[i]]>maxfrequency){
            maxfrequency=s[i];
        }
    }
    cout<<maxfrequency;


    return 0;
}