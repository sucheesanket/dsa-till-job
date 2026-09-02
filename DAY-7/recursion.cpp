// #include<iostream>
// using namespace std;
// void printNumbers(int n){
//     if(n==0){
//         return;
//     }
//     // printNumbers(n-1);
//     // cout<<n<<" "; //increasing order
//     cout<<n<<" "; 
//     printNumbers(n-1); //decreasing order
// }
// int main(){
//     int n;
//     cin>>n;
//     printNumbers(n);
    

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sumNumbers(int n){
//     if(n==0){
//         return 0;
//     }
//     return n + sumNumbers(n-1);

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sumNumbers(n);
//     return 0;
    

// }

// This is factorial program
// #include<iostream>
// using namespace std;
// int factorialNumber(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*factorialNumber(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorialNumber(n);
//     return 0;
// }



//this is fibonacci program

// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
    
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fibonacci(n);
//     return 0;
// }

// 🎯 Final Recursion Problem for Day 7

// Reverse a String Using Recursion

// Input:

// hello

// Output:

// olleh

// #include<iostream>
// #include<string>
// using namespace std;
// void reverseString(string &s,int left,int right){
//     if(left>=right){
//         return;
//     }
//     swap(s[left],s[right]);
//     reverseString(s,left+1,right-1);
    
// }
// int main(){
//     string s;
//     cin>>s;
//     reverseString(s,0,s.length()-1);
//     cout<<s;
//     return 0;
// }

// Next problem — Recursion + Array

// Problem: Find the sum of all elements in an array using recursion.

// Example:

// Input:  1 2 3 4 5
// Output: 15
// #include<iostream>
// #include<vector>
// using namespace std;
// int sum(vector <int>& arr,int n){
//     if(n==0){
//         return 0;
//     }
//     return arr[n-1]+sum(arr,n-1);

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<sum(arr,n);
//     return 0;
// }

// Problem: Find the maximum element in an array using recursion.

// Example:

// Input:
// 6
// 3 8 2 10 5 7

// Output:
// 10
// #include<iostream>
// #include<vector>
// using namespace std;
// int maximumElement(vector<int> & arr,int n){
//     if(n==1){
//         return arr[0];
//     }
//     return max(arr[n-1],maximumElement(arr,n-1));

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<maximumElement(arr,n);
//     return 0;
// }


// Problem: Check if an array is sorted using recursion

// Example 1:

// Input:
// 5
// 1 2 3 4 5

// Output:
// Sorted

#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> & arr ,int n){
    if(n==1){
        return true;
    }
    return (arr[n-2] <= arr[n-1]) && isSorted(arr,n-1);
    
    

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if( isSorted(arr,n)==true){
        cout<<"Sorted";
    }
    else{
        cout<<"Unsorted";
    }
    return 0;
}