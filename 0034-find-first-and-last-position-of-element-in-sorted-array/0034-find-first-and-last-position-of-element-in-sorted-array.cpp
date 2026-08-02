class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);  

        int start = 0, end = nums.size() - 1;
        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                result[0] = mid;   // save answer
                end = mid - 1;     // keep searching left
            }
            else if(nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        start = 0;
        end = nums.size() - 1;
        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                result[1] = mid;   // save answer
                start = mid + 1;     // keep searching left
            }
            else if(nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return result;
    }
};

