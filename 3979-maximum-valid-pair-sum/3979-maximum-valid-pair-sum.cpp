class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();

        int maxRight = nums[n - 1];
        int ans = INT_MIN;

        for(int i = n - k - 1; i >= 0; i--) {
            maxRight = max(maxRight, nums[i + k]);
            ans = max(ans, nums[i] + maxRight);
        }

        return ans;
    }
};