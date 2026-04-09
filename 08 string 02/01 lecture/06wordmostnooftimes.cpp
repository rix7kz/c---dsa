#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include<sstream>
using namespace std;
int main(){

    string str ="yashu is a gay boy he is gay";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
        
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    int n=v.size();
    int maxCount= 1;
    int count=1;
    for (int i=0;i<n;i++){
        if (v[i]==v[i-1]) count++;
        else count =1;
        maxCount= max(maxCount,count);
    }

    count=1;
    for (int i=0;i<n;i++){
        if (v[i]==v[i-1]) count++;
        else count =1;
        if(count==maxCount){
            cout<<v[i]<<endl<<maxCount;
        }

    }
    
}
