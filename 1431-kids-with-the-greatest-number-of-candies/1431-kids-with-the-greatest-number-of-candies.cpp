class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        int n=candies.size();
        vector<bool>ans(n);
        int maximum=0;
        for(int i:candies){
            maximum=(i>maximum)?i:maximum;
        }
        for(int i=0;i<n;i++){
            ans[i]=((candies[i]+extra)>=maximum)?true:false;
        }
        return ans;
    }
};