class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long>pre(n+1,0);
        int ans=n+1;
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        deque<int>d;
        for(int i=0;i<=n;i++){
            while(d.size()>0 && pre[i]-pre[d.front()]>=k){
                ans=min(ans,i-d.front());
                d.pop_front();
            }
            while(d.size()>0 && pre[d.back()]>=pre[i]){
                d.pop_back();
            }
            d.push_back(i);
        }
        return ans<=n?ans:-1;
    }
};