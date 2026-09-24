class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>candy(ratings.size(),1);
        // int i=0;
        int j=ratings.size()-1;
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
                candy[i]=candy[i-1]+1;
            }
        }
        for(int i=j-1;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                candy[i]=max(candy[i],candy[i+1]+1);
            }
        }
        int ans=0;
        for(int i:candy){
            ans+=i;
        }
        return ans;
    }
};