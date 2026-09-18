class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0;
        int maximum=INT_MIN;

        for(int i:nums){

            curr+=i;
            maximum=max(maximum,curr);
            curr=curr<0?0:curr;
        }

        return maximum;
    }
};