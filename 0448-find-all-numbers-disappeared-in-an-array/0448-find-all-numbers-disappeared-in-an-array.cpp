class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>freq(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            freq[val]++;
        }
        vector<int>ans;
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};