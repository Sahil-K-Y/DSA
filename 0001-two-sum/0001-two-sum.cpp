class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int first=nums[i];
            int sec=target-nums[i];
            if(mp.count(sec)){
                return {mp[sec],i};
            }
            mp[first]=i;
        }
        return {};
    }
};