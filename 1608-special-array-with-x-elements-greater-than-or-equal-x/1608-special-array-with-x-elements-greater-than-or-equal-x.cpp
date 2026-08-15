class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0;

        for(int ans = 0; ans <= nums[n-1]; ans++) {

            while(i < n && nums[i] < ans)
                i++;

            if(n - i == ans)
                return ans;
        }

        return -1;
    }
};