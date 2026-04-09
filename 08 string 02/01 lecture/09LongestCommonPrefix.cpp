#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
   
    vector<string>v;
    v.push_back("flighy");
    v.push_back("flow");
    v.push_back("flower");
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++){
        cout<<v[i]<<" ";
    }

   


}
