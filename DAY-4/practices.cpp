// // // // sorting algorithms
// // // // bubble sort
// // // // 🎯 Problem 1 — Implement Bubble Sort

// // // // Given:

// // // // 5
// // // // 5 1 4 2 8

// // // // Output:

// // // // 1 2 4 5 8

// // // #include<iostream>
// // // #include<vector>

// // // using namespace std;
// // // int main(){
// // //     int n;
// // //     cin>>n;
    
// // //     vector<int> arr(n);
// // //     for(int i=0;i<n;i++){
// // //         cin>>arr[i];
// // //     }
// // //     for(int i=0;i<n-1;i++){
// // //         bool swapped=false;
// // //         for(int j=0;j<n-i-1;j++){
// // //             if(arr[j]>arr[j+1]){
// // //                 swap(arr[j],arr[j+1]);
// // //                 swapped=true;
// // //             }
// // //         }
// // //         if(!swapped){
// // //         break;
// // //     }
// // //     }
    
// // //     for(int i=0;i<n;i++){
// // //         cout<<arr[i]<<" ";
// // //     }
// // //     return 0;
// // // }

// // // 🚀 Day 4 — Problem 2: Selection Sort

// // // Now let's learn a different sorting pattern.

// // // 🎯 Your Problem

// // // Implement Selection Sort yourself.

// // // Input:

// // // 5
// // // 64 25 12 22 11

// // // Output:

// // // 11 12 22 25 64

// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;
// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     vector<int> arr(n);
// // //     for(int i=0;i<n;i++){
// // //         cin>>arr[i];
// // //     }
// // //     for(int i=0;i<n;i++){
// // //         int min_idx=i;
// // //         for(int j=i+1;j<n;j++){
// // //             if(arr[j]<arr[min_idx]){
// // //                 min_idx=j;
// // //             }
// // //         }
// // //         swap(arr[min_idx],arr[i]);
// // //     }
// // //     for(int i=0;i<n;i++){
// // //         cout<<arr[i]<<" ";
// // //     }
// // //     return 0;
// // // }

// // // 🚀 Problem 3 — Insertion Sort

// // // 🎯 Your Problem

// // // Implement Insertion Sort yourself.

// // // Input:

// // // 5
// // // 5 3 4 1 2

// // // Output:

// // // 1 2 3 4 5

// // // Try:

// // // 6
// // // 12 11 13 5 6 7

// // // Output:

// // // 5 6 7 11 12 13

// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     vector<int> arr(n);
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     for(int i=1;i<n;i++){
// //         int key=arr[i];
// //         int j=i-1;
// //         while(j>=0 &&arr[j]>key){
// //             arr[j+1]=arr[j];
// //             j--;
// //         }
// //         arr[j+1]=key;
// //     }
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     return 0;
// // }

// // 🎯 Day 4 Challenge — Remove Duplicates

// // Given an unsorted array, remove duplicate values and print the unique values.

// // Example:

// // Input:
// // 8
// // 4 2 4 1 2 7 1 3

// // Output can be:

// // 1 2 3 4 7

// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     vector<int> arr(n);
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     for(int i=0;i<n-1;i++){
// //         for(int j=0;j<n-i-1;j++){
// //             if(arr[j]>arr[j+1]){
// //                 swap(arr[j],arr[j+1]);
// //             }
// //         }
// //     }
// //     int j=1;
// //     for(int i=1;i<n;i++){
// //         if(arr[i]!=arr[i-1]){
// //             arr[j]=arr[i];
// //             j++;
// //         }
// //     }
// //     for(int i=0;i<j;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     return 0;
// // }
// 🚀 Day 4 — Final Challenge

// Let's test that understanding.

// Problem: Second Largest Element

// Given an unsorted array, find the second largest distinct element.

// Example:

// Input:
// 6
// 10 5 8 10 3 8

// Output:

// 8

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int sec_larg=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            sec_larg=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>sec_larg){
            sec_larg=arr[i];
        }
    }
    if(sec_larg==INT_MIN){
        cout<<"No Second largest is found.";
    }else{

        cout<<sec_larg;
    }
    return 0;
}