#include<iostream>
using namespace std;
void GM(int a){
    if ( a==0) return;
    cout<<"Good Morning"<<endl;
    GM(a-1);

}
int main(){
    int n;
    cin>>n;
    GM(n);
}