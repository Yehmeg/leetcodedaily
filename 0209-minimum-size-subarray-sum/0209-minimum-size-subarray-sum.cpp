class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minarr = nums.size() + 1;
        int right = 0;
        int left = 0;
        int sum = 0;

        while(right <= nums.size()) {

            if(sum >= target) {
                int len = right - left;

                minarr = min(minarr, len);

                sum -= nums[left];
                left++;
            }
            else {
                if(right==nums.size()) break;
                sum += nums[right];
                right++;
            }
            // if(right==nums.size())
        }

        if(minarr == nums.size() + 1)
            return 0;

        return minarr;
    }
};