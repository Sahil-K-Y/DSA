class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n=nums.size();
        deque<int>maxd;
        deque<int>mind;
        int ans=0;
        int left=0;
        for(int i=0;i<n;i++){
            while(maxd.size()>0 && nums[maxd.back()]<nums[i])maxd.pop_back();
            maxd.push_back(i);
            while(mind.size()>0 && nums[mind.back()]>nums[i])mind.pop_back();
            mind.push_back(i);
            while(nums[maxd.front()]-nums[mind.front()]>limit){
                if(maxd.front()==left)maxd.pop_front();
                if(mind.front()==left)mind.pop_front();
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};