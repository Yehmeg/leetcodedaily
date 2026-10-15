class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            set<int> s;

            for(int j = i; j < n; j++) {
                s.insert(nums[j]);

                int distinct = s.size();
                ans += distinct * distinct;
            }
        }

        return ans;
    }
};