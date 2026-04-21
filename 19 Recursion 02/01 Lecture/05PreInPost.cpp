// zig zag
#include<iostream>
using namespace std;
void pip(int n){
    if(n==0) return ;\
    pip(n-1);
    cout<<"in"<<n<<endl;
    pip(n-1);
    cout<<"post"<<n<<endl;


}
int main(){
    int n;
    cin>>n;
    pip(n);
    cout<<endl;
}