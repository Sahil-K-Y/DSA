class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=2*n-2;i>=0;i--){
            while(s.size()>0 && nums[s.top()]<=nums[i%n]){
                s.pop();
            }
            ans[i%n]=s.empty()?-1:nums[s.top()];
            s.push(i%n);
        }
        return ans;
    }
};