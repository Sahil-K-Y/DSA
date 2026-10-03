class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>cnt;
        int l=0;
        int ans=0;
        for(int i=0;i<fruits.size();i++){
            cnt[fruits[i]]++;

            while(cnt.size()>2){
                cnt[fruits[l]]--;
                if(cnt[fruits[l]]==0){
                    cnt.erase(fruits[l]);
                }
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};