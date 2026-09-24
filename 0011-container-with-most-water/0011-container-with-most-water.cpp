class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0;
        int j=h.size()-1;
        int ans=0;
        while(i<j){
            int left=h[i];
            int right=h[j];
            int ht=min(left,right);
            int wt=j-i;
            int area=ht*wt;
            ans=max(area,ans);
            if(left<=right){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};