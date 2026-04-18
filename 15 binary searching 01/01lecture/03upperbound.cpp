#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,3,5,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    int x = 4;
    int l =0;
    int h=n-1;
    while (l<=h){
        int m  = l+(h-l)/2;   
        if (arr[m]==x){
             cout<<arr[m+1]<<endl; 
             return 0;
        }
        else if(arr[m]>x) h= m-1;
        else l= m+1;
    }
    cout<<arr[l];
}