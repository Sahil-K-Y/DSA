#include<iostream>
#include<vector>
using namespace std;
void seive(int n){
    vector<bool>ans(n,true);
    ans[0]=ans[1]=false;
    for(int i=2;i<n;i++){
        for(int j=2*i;j<n;j+=i){
            ans[j]=false;
        }
        if(ans[i]){
            cout<<i<<"->";
        }
    }
}
int main(){
    seive(50);
    return 0;
}