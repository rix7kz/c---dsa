// Print an increasing-decreasing sequence using recursion

// Example: If n = 5, the output should be: 1 2 3 4 5 4 3 2 6

#include<iostream>
using namespace std;
void print(int n){
    // base cASE
    if(n==0) return;
    print(n-1); //call
    // kaam
    cout<<n<<endl;
}
void print2(int n){
    // base cASE
    if(n==0) return;
    // kaam
    cout<<n<<endl; 
    print2(n-1); //call
    
}
int main(){
    int n;
    cin>>n;
    print(n);
    print2(n-1);
}