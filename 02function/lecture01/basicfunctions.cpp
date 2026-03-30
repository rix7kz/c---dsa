#include<iostream>
using namespace std;
void triangle(int L){
    for(int i=1;i<=L;i++){
          for(int j=1;j<=i;j++){
                cout<<"❤️";
           }
           cout<<endl;
        } 
}
int main(){
    triangle(5);
    triangle(5);triangle(8);
    return 0;
}