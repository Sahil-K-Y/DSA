#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=9;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Not";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}