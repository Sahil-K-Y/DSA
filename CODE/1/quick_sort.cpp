#include<bits/stdc++.h>
using namespace std;
int quick(vector<int>&arr,int left,int right){
    int piv=arr[right];
    int low=left-1;
    for(int i=left;i<right;i++){
        if(arr[i]<=piv){
            low++;
            swap(arr[i],arr[low]);
        }
    }
    swap(arr[low+1],arr[right]);

    return low+1;
}
void quicksort(vector<int>&arr,int low,int high){
    if(low>=high)return;

    int piv=quick(arr,low,high);
    quicksort(arr,low,piv-1);
    quicksort(arr,piv+1,high);
}
int main(){
    vector<int>arr={7,10,1,2,4,3,9,5};

    quicksort(arr,0,arr.size()-1);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
