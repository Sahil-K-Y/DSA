class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();

        int l = k;
        int r = k;

        int mini = nums[k];
        int ans = mini;

        while (l > 0 || r < n - 1) {

            if (l == 0) {
                r++;
                mini = min(mini, nums[r]);
            }
            else if (r == n - 1) {
                l--;
                mini = min(mini, nums[l]);
            }
            else if (nums[l - 1] > nums[r + 1]) {
                l--;
                mini = min(mini, nums[l]);
            }
            else {
                r++;
                mini = min(mini, nums[r]);
            }

            int len = r - l + 1;
            int score = mini * len;

            ans = max(ans, score);
        }

        return ans;
    }
};