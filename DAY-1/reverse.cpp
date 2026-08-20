// reverse an array
// Test it with:

// 5
// 1 2 3 4 5

// Expected:

// 5 4 3 2 1

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
//     int left=0;
//     int right=n-1;
//     while(left<=right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }


//two sum
// Problem

// Given an array of integers and a target, find two numbers whose sum equals the target.

// Example:

// arr = [2, 7, 11, 15]
// target = 9

// Answer:

// 2 + 7 = 9

// So:

// [0, 1]

// Write a program for:

// Input:
// 4
// 2 7 11 15
// 9

// Expected output:

// 0 1

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
//        int sum=arr[left]+arr[right];
//        if(sum==target){
//         cout<<left<<" "<<right;
//         return 0;
//        }
//        else if(sum<target){
        
//         left++;
//        }
//        else{
        
//         right--;
//        }

//     }
//     return 0;
// }



// 🧩 Problem 3 — Two Sum on an Unsorted Array

// This is our final problem for today's core practice.

// Given:

// arr = [3, 2, 4]
// target = 6

// Find the indices of two numbers whose sum is 6.

// Answer:

// 1 2

// because:

// 2 + 4 = 6
// Input
// 3
// 3 2 4
// 6

// Expected:

// 1 2

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
    
//     unordered_map<int,int> pair;
//     for(int i=0;i<n;i++){
//         needed=target-arr[i];
//         if(pair.find(needed)!=pair.end()){
//             cout<<pair[needed]<<" "<<i;
//             return 0;
//         }
//         pair[arr[i]]=i;
//     }
//     cout<<"NOT Found";
    

//     return 0;

// }

//move zeros
/*Problem A — Easy

Given:

[1, 2, 3, 4, 5, 6]

Move all zeros to the end.

Example:

[0, 1, 0, 3, 12]

becomes:

[1, 3, 12, 0, 0]

Try to do it in-place.*/

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
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//              swap(arr[i],arr[j]);
//             j++;
//         }
       
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// 🚀 Problem B — Remove Duplicates

// Now let's make the two-pointer idea slightly more interesting.

// Given a sorted array:

// [1, 2, 2, 3, 4, 4, 5]

// We want:

// [1, 2, 3, 4, 5]


// For:

// 7
// 1 2 2 3 4 4 5

// Expected:

// 1 2 3 4 5

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
//     int j=1;
//     for(int i=1;i<n;i++){
//         if(arr[i]!=arr[i-1]){
//             arr[j]=arr[i];
//             j++;

//         }
//     }
//     for(int i=0;i<j;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

// 🧩 Problem C — Palindrome
// Example 1
// 5
// 1 2 3 2 1

// Output:

// Palindrome
// Example 2
// 5
// 1 2 3 4 5

// Output:

// Not Palindrome
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
//     int left=0;
//     int right=n-1;
//     while(left<right){
//         if(arr[left]!=arr[right]){
            
            
//             cout<<"Not palindrome";
//             return 0;

//         }
        
//             left++;
//             right--;
            
        
        
//     }
//     cout<<"Palindrome";
   
//     return 0;

// }



//stock and buy sell

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
//     int minprice=arr[0];
//     int profit;
//     int maxprofit=0;
//     for(int i=1;i<n;i++){
//         if(arr[i]<minprice){
//             minprice=arr[i];
//         }
//         profit=arr[i]-minprice;
//         if(profit>maxprofit){
//             maxprofit=profit;
//         }
//     }
//     cout<<maxprofit;
//     return 0;
// }


// H.W=>1 find second largest one
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
//     int largest=INT_MIN;
//     int sec_large=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             sec_large=largest;
//             largest=arr[i];
//         }
//         else if(arr[i]<largest&& arr[i]>sec_large){
//             sec_large=arr[i];
//         }
//     }
//     cout<<sec_large;
//     return 0;
// }

// H.W=>2 check array is sorted or not
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
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             cout<<"Not sorted";
//             return 0;

//         }}
//             cout<<"sorted";
        
    
    
//     return 0;
// }


// maximum consecutive ones 1 1 0 1 1 1   => 3
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
//     int maxo=0;
//     int o=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1){
//             o++;
//             maxo=max(maxo,o);
//         }
        
//         if(arr[i]!=1){
//             o=0;
//         }
//     }
    
//     cout<<maxo;

//     return 0;
// }