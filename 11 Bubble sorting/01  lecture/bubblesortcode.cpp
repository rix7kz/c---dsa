#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){//to check if the array is already sorted or not
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n=5;
    int arr[] = { 5,4,3,2,1};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                // int temp = arr[j]; // swapping the elements using temp function
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j], arr[j+1]); //swapping the elements using swap function
            }
        }
    }

    // optimised bubble sort
        for(int i=0;i<n-1;i++){
            bool flag=true;
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    // int temp = arr[j]; // swapping the elements using temp function
                    // arr[j] = arr[j+1];
                    // arr[j+1] = temp;
                    swap(arr[j], arr[j+1]); //swapping the elements using swap function
                }
            }
            if(flag==true){
                break;
            }
        }

//print the sorted array
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

