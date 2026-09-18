class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0;
        int max_kadan=INT_MIN;
        int cur=0;
        int curr=0;
        int min_kadan=INT_MAX;
        for(int i:nums){
            cur+=i;
            curr+=i;
            max_kadan=max(max_kadan,cur);
            min_kadan=min(min_kadan,curr);
            cur=cur<0?0:cur;
            curr=curr>0?0:curr;
            total+=i;
        }
        if(max_kadan<0){
            return max_kadan;
        }
        return max(max_kadan,total-min_kadan);
    }
};