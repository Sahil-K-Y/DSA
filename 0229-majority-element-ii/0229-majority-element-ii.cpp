class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int first = 0, second = 0;
        int count1 = 0, count2 = 0;

        // Step 1: Voting Pass
        for (int i : nums) {
            if (i == first) {
                count1++;
            } else if (i == second) {
                count2++;
            } else if (count1 == 0) {
                first = i;
                count1 = 1;
            } else if (count2 == 0) {
                second = i;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        // Step 2: Verification Pass
        count1 = 0;
        count2 = 0;
        for (int i : nums) {
            if (i == first) count1++;
            else if (i == second) count2++;
        }

        vector<int> ans;
        if (count1 > n / 3) ans.push_back(first);
        if (count2 > n / 3) ans.push_back(second);

        return ans;
    }
};