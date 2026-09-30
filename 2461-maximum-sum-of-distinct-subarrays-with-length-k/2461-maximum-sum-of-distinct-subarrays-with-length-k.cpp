class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        long long currsum = 0;
        long long maxsum = 0;

        for (int i = 0; i < k; i++) {
            currsum += nums[i];
            freq[nums[i]]++;
        }


        if (freq.size() == k) {
            maxsum = currsum;
        }

        for (int i = k; i < n; i++) {

            currsum += nums[i];
            freq[nums[i]]++;


            currsum -= nums[i - k];
            freq[nums[i - k]]--;
            if (freq[nums[i - k]] == 0) {
                freq.erase(nums[i - k]); 
            }

            // Valid window check
            if (freq.size() == k) {
                maxsum = max(maxsum, currsum);
            }
        }

        return maxsum;
    }
};