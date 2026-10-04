class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {first(nums, target), last(nums, target)};
    }
private:
    int first(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) ans = mid;   
            if (nums[mid] >= target) high = mid - 1;
            else low = mid + 1;
        }
        return ans;
    }
    int last(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) ans = mid;  
            if (nums[mid] <= target) low = mid + 1;
            else high = mid - 1;
        }
        return ans;
    }
};