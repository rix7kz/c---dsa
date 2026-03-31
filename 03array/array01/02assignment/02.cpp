//Find the second largest element in the given Array in one pass.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] != max){
            smax = arr[i];
        }
    }

    cout << "Max: " << max << endl;
    cout << "Second Max: " << smax << endl;
}