#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string arr[]={"123","564","245","789","678","987"};

    int max = stoi(arr[0]);
    string maxS=arr[0];
    for (int i=0;i<6;i++){
        int x =stoi(arr[i]);
        if(x>max){
            max=x;
            maxS=arr[i];
        }
    }
    cout<<maxS;


}
