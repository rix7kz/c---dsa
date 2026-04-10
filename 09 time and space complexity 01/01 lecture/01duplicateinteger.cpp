#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,6};
    int n=9;
    int sum=0;
    for (int i =0 ;i<=n;i++){
         sum +=arr[i];
    }
    int s=n*(n+1)/2;
    cout<<sum-s<<endl;
}