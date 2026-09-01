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

#include<iostream>
using namespace std;
int factorialNumber(int n){
    if(n==0){
        return 1;
    }
    return n*factorialNumber(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorialNumber(n);
    return 0;
}