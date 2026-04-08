#include <iostream>
#include <vector>
using namespace std;
void change (int arr[3][3]){//we have to provide the size int he 2d array function without providing the as like the array we will get the error.not only row we have to provide column also .
    arr[0][0]=100;

}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<arr[0][0]<<endl;
    change(arr);
    cout<<arr[0][0];
}