#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s ;
    // cin>>s;
    getline(cin,s);
    sort(s.begin(),s.end()); //it sorts according to the ascii value
    cout<<s;
}