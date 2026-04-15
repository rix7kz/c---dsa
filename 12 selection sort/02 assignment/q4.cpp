// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of two numbers formed from digits of the array. Please note that all digits of the given array must be used to form the two numbers.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n<<endl;
    int num1=0;
    int num2=0;
    for (int i= 0;i<n;i++){
        if (i%2==0){
            num1= num1*10 +arr[i];
        }
        else{
            num2 = num2*10 +arr[i];
        }
    }
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<"minimum sum = "<<num1 + num2 <<endl;


}