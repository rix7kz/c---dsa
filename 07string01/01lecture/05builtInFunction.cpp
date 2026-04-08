#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    string str= "emma stone is an actress";
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    string s ="abcd";
    cout<<s<<endl;
    s.push_back('g');
    s.push_back('g');
    s.push_back('g');
    s.push_back('g');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;

    string r="garv is ";
    cout<<r<<endl;
    r+= "gay";
    cout<<r<<endl;
    reverse(r.begin(), r.end());
    cout << r << endl;
}