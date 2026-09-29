class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());


        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int currSum = nums[i] + nums[j] + nums[k];


                if (currSum == target) {
                    return currSum;
                }

                if (abs(currSum - target) < abs(closestSum - target)) {
                    closestSum = currSum;
                }

                // Two-pointer movement
                if (currSum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        return closestSum;
    }
};