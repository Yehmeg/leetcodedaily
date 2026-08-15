class Solution {
public:
    void help(vector<int>& nums, vector<int> ans,
              vector<vector<int>>& finalans, int idx) {

        if(idx == nums.size()) {
            finalans.push_back(ans);
            return;
        }

        // TAKE
        ans.push_back(nums[idx]);
        help(nums, ans, finalans, idx + 1);

        // DON'T TAKE
        ans.pop_back();

        // Skip all duplicates of nums[idx]
        while(idx + 1 < nums.size() && nums[idx] == nums[idx + 1])
            idx++;

        help(nums, ans, finalans, idx + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> finalans;
        vector<int> ans;

        help(nums, ans, finalans, 0);

        return finalans;
    }
};