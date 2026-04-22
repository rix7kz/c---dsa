// Print all the elements of an array in reverse order using recursion.
#include<iostream>
using namespace std;
void revarr(int arr[],int n ,int idx){
    // base case
    if (idx<0)return;
    // kaam
    cout<<arr[idx]<<" ";
    revarr(arr,n,idx-1);
    
}
int main(){
    int arr[]={1,4,2,5,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int r=n-1;
    revarr(arr,n,r);
}