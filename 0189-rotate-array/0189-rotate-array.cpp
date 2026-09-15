class Solution {
public:
    void rev(vector<int>& v,int l,int r){
        while(l<r){
            swap(v[l],v[r]);
            l++;
            r--;
        }
    }
    void rotate(vector<int>& v, int k) {
        int n=v.size();
        k=k%n;
        rev(v,0,n-1);
        rev(v,0,k-1);
        rev(v,k,n-1);
    }
};