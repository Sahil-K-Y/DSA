class Solution {
public:
    int trap(vector<int>& h) {
        int ans=0;
        int i=0;
        int j=h.size()-1;
        int left=h[i],right=h[j];
        while(i<=j){
            if(left<=right){
                if(h[i]>=left){
                    left=h[i];
                }else{
                    ans+=left-h[i];
                }
                i++;
            }else{
                if(h[j]>=right){
                    right=h[j];
                }else{
                    ans+=right-h[j];
                }
                j--;
            }
        }
        return ans;
    }
};