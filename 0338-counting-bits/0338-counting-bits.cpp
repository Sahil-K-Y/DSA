class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        for(int i=1;i<n+1;i++){
            int count=0;
            int j=i;
            while(j>0){
                j=j&(j-1);
                count++;
            }
            ans[i]=count;
        }
        return ans;
    }
};