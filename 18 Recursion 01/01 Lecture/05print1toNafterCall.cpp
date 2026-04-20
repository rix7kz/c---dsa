#include<iostream>
using namespace std;
void print(int n){
    // base cASE
    if(n==0) return;
    print(n-1); //call
    // kaam
    cout<<n<<endl;

}
int main(){
    print(9);
}
//  when we call the fn before printing it will go till the last call and in the last call it will start printing form there one by one to the first call so that it will print all the no in ascending order;