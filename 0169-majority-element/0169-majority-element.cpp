class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int first=nums[0];

        for(int i:nums){
            if(count==0){
                first=i;
            }
            count+=(first==i)?1:-1;

        }
        return first;
    }
};