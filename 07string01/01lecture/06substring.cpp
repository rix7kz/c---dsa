#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abcdef";
    cout<<str.substr(2,4);
  //to_string it converts the integer into the string 
  //to_string(8) 8 will act as a string 
  int x= 1234;
  string s=to_string(x);
  cout<<s;
  
}