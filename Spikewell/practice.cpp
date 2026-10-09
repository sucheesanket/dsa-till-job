// Q1. Even or Odd
// Determine whether a number is even or odd.
// Input
// 7


// Output
// Odd
//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0) cout<<"even";
//     else cout<<"odd";
//     return 0;
// }

// Q2. Positive, Negative or Zero
// Input
// -12


// Output
// Negative
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n==0) cout<<"Zero";
//     else if(n<0) cout<<"Negative";
//     else cout<<"Positive";
//     return 0;
// }




// Q3. Largest of Three Numbers
// Input
// 12 45 27


// Output
// 45
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a>=b&&a>=c) cout<<"Largest number is "<<a;
//     else if(b>=c&&b>=a) cout<<"Largest number is "<<b;
//     else cout<<"Largest number is "<<c;
//     return 0;
// }

// 4. Sum of First N Natural Numbers
// Input
// 10


// Output
// 55
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum;
//     return 0;
// }

// 5. Factorial of a Number
// Input
// 5


// Output
// 120

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     cout<<fact;
//     return 0;
// }

// Q6. Count Digits in a Number
// Input
// 58329


// Output
// 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     while(n!=0){
//         n/=10;
//         count++;
//     }
//     cout<<count;
//     return 0;
// }

// 7. Sum of Digits
// Input
// 58329


// Output
// 27
// #incl
// Q8. Reverse a Number
// Input
// 12345


// Output
// 54321

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int digit;
//     int rev=0;
//     while(n!=0){
//         digit=n%10;
//         rev=rev*10+digit;
//         n/=10;

//     }
//     cout<<rev;
//     return 0;
// }
// Q9. Check Palindrome Number
// Input
// 1221


// Output
// Palindrome

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int digit;
//     int pali=0;
//     int num=n;
//     while(n!=0){
//         digit=n%10;
//         pali=pali*10+digit;
//         n/=10;
//     }
//     if(pali==num) cout<<"Palindrome";
//     else cout<<"Not Palindrome";
//     return 0;
// }

// Q10. Check Prime Number
// Input
// 29


// Output
// Prime

// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     if(n<2) return false;

//     for(int i=2;i<n;i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(isPrime(n)){
//         cout<<n<<" is a prime number.";
//     }else{
//         cout<<n<<" is not a prime number.";
//     }

//     return 0;
// }

// Q11. Print Fibonacci Series
// Print the first N Fibonacci numbers, starting with 0 and 1.
// Input
// 7


// Output
// 0 1 1 2 3 5 8

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     long long first=0,second=1,next;
//     for(int i=0;i<n;i++){
//         if(i<=1){
//             next=i;
//         }else{
//             next=first+second;
//             first=second;
//             second=next;
//         }

//         cout<<next<<" ";
//     }
//     return 0;
// }

// Q12. Check Armstrong Number
// Input
// 153


// Output
// Armstrong
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int num=n;
//     int digit;
//     int sum=0;
//     while(n!=0){
//         digit=n%10;
//         sum+=digit*digit*digit;
//         n/=10;
//     }
//     if(sum==num){
//         cout<<"Armstrong Number.";
//     }else{
//         cout<<"Not an Armstrong Number.";
//     }
//     return 0;
// }

// Section 2: Arrays
// Q13–Q26 · Very important for coding assessments
// Q13. Find the Largest Element
// Input
// 5
// 10 25 7 42 18


// Output
// 42

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
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     cout<<largest;

//     return 0;
// }

// Q14. Find the Smallest Element
// Input
// 5
// 10 25 7 42 18


// Output
// 7


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
//     int smallest=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     cout<<smallest;

//     return 0;
// }

// Q15. Find the Second Largest Distinct Element
// Input
// 6
// 12 35 1 10 34 1


// Output
// 34


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
//     int sec_larg=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest&&arr[i]>sec_larg){
//             sec_larg=largest;
//             largest=arr[i];
//         }else if(arr[i]<largest&&arr[i]>sec_larg){
//             sec_larg=arr[i];
//         }
//     }
    // cout<<largest;
//     cout<<sec_larg;

//     return 0;
// }

// Q16. Find the Second Smallest Distinct Element
// Input
// 6
// 12 35 1 10 34 1


// Output
// 10


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
//     int smallest=INT_MAX;
//     int Sec_small=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest&&arr[i]<Sec_small){
//             Sec_small=smallest;
//             smallest=arr[i];
//         }else if(arr[i]>smallest&&arr[i]<Sec_small){
//             Sec_small=arr[i];
//         }
//     }
//     cout<<Sec_small;

//     return 0;
// }

// Q17. Calculate the Sum of Array Elements
// Input
// 5
// 1 2 3 4 5


// Output
// 15

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
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<sum;
//     return 0;
// }

// Q18. Reverse an Array
// Input
// 5
// 1 2 3 4 5


// Output
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

// Q19. Count Even and Odd Elements
// Input
// 6
// 1 2 3 4 5 6


// Output
// Even: 3
// Odd: 3

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
//     int odd=0;
//     int even=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             even++;
//         }else{
//             odd++;
//         }
//     }
//     cout<<"Odd = "<<odd<<endl;
//     cout<<"Even = "<<even<<endl;
//     return 0;
// }

// Q20. Remove Duplicates from a Sorted Array
// Input
// 7
// 1 1 2 2 2 3 4


// Output
// 1 2 3 4

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

// Q21. Move All Zeros to the End
// Input
// 6
// 0 1 0 3 12 0


// Output
// 1 3 12 0 0 0

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
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Q22. Find the Missing Number
// An array contains distinct numbers from 0 to N, with one number missing.
// Input
// 5
// 3 0 1 4 5


// Output
// 2

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
//     int sum=0;
//     int ans;
//     int actualsum=(n*(n+1))/2;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     ans=actualsum-sum;
//     cout<<ans;
//     return 0;
// }

