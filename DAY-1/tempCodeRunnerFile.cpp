
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
    int minprice=arr[0];
    int profit;
    int maxprofit=0;
    for(int i=1;i<n;i++){
        if(arr[i]<minprice){
            minprice=arr[i];
        }
        profit=arr[i]-minprice;
        if(profit>maxprofit){
            maxprofit=profit;
        }
    }
    cout<<maxprofit;
    return 0;
}