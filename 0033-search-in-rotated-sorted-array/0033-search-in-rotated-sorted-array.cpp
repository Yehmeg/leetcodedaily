class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        if (n <= 2) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == target)
                    return i;
            }
            return -1;
        }

        int lo = 0;
        int hi = n - 1;
        int pivot = -1;

        // Find Pivot 
        while (lo <= hi) {

            int mid = lo + (hi - lo) / 2;

            if (mid == 0) {
                pivot = (nums[0] < nums[n - 1]) ? 0 : n - 1;
                break;
            } // for either sorted or reverse sorted array

            if (nums[mid] < nums[mid - 1] &&
                nums[mid] < nums[mid + 1]) {

                pivot = mid;
                break;
            }
            if (nums[mid] > nums[mid - 1] &&
                nums[mid] > nums[mid + 1]) {

                pivot = mid + 1;  
                break;
            }

            if (nums[mid] > nums[hi]) {
                lo = mid + 1;
            }
            else {
                hi = mid-1;
            }
        }
        // search range

        if (target >= nums[pivot] &&
            target <= nums[n - 1]) {

            lo = pivot;
            hi = n - 1;
        }
        else {

            lo = 0;
            hi = pivot - 1;
        }

        //search

        while (lo <= hi) {

            int mid = lo + (hi - lo) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }

        return -1;
    }
};