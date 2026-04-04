#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>& arr1, vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();

    vector<int> res(n + m);

    int i = 0, j = 0, k = 0;

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            res[k++] = arr1[i++];
        }
        else{
            res[k++] = arr2[j++];
        }
    }

    // remaining elements
    while(i < n){
        res[k++] = arr1[i++];
    }

    while(j < m){
        res[k++] = arr2[j++];
    }

    return res;
}

int main(){
    vector<int> arr1 = {1,4,5,8};
    vector<int> arr2 = {2,3,6,7,9,10};

    vector<int> v = merge(arr1, arr2);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}