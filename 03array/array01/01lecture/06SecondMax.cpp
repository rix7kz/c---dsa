#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    cin>>arr[i];
    int max=0;


    for(int i=0;i<=n-1;i++){
        if (max<arr[i]) max = arr[i];
    }
    cout<<max<<endl;
    int smax=0;
    for(int i=0;i<=n-1;i++){
        if(  arr[i]!=max &&  smax<arr[i]) smax=arr[i];
    }
    cout<<max<<endl;
    cout<<smax<<endl;
}