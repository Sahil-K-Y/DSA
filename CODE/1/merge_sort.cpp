#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int left,int right,int mid){
    vector<int>temp;
    int i=left;
    int j=mid+1;
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;

        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)temp.push_back(arr[i++]);

    while(j<=right)temp.push_back(arr[j++]);
    for(int k=0;k<temp.size();k++){
        arr[left+k]=temp[k];
    }
}
void mergesort(vector<int>&arr,int left,int right){
    if(left>=right)return;
    int mid = left+(right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,right,mid);
}
int main(){

    vector<int>arr={7,10,1,2,4,3,9,5};
    mergesort(arr,0,arr.size()-1);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}