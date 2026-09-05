class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();

        if(n == 1)
            return 0;

        vector<int> suffixMin(n);

        suffixMin[n - 1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
        }

        int mx = nums[0];

        for(int i = 0; i < n; i++) {

            mx = max(mx, nums[i]);

            int mn = suffixMin[i];

            if(abs(mx - mn) <= k)
                return i;
        }

        return -1;
    }
};