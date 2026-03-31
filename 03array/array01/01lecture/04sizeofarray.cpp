#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array = ";
    cin>>n;
    int arr[n];

    cout<<"give the data for the array =     ";
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sum=0;

    for(int i=0;i<=n-1;i++){
        sum= sum+arr[i];
    }

    cout<<sum;
}