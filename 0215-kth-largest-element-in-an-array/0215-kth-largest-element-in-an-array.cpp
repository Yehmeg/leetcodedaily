class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int index=nums.size()-k;
        sort(nums.begin(), nums.end());
        return nums[index];
    }
};