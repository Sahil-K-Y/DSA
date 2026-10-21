class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path;

        function<void(int)> dfs = [&](int start) {
            if (path.size() >= 2) ans.push_back(path);

            unordered_set<int> used;

            for (int i = start; i < nums.size(); i++) {
                if ((!path.empty() && nums[i] < path.back()) ||
                    used.count(nums[i]))
                    continue;

                used.insert(nums[i]);
                path.push_back(nums[i]);
                dfs(i + 1);
                path.pop_back();
            }
        };

        dfs(0);
        return ans;
    }
};