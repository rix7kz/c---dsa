#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include<sstream>
using namespace std;
int main(){

    string str ="yashu is a gay boy";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}