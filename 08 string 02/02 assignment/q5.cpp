// Given a sentence ‘str’, return the word that is lexicographically maximum.


// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with
#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s="decode dsa with pw";
    stringstream ss(s);
    string v;
    string max=" ";
    while(ss>>v){
        if (v>max){
        max=v;
        }
    }
    cout<<v<<endl;
    
}