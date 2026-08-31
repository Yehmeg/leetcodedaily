class Solution {
public:

    void merge(vector<int>& nums, int lo, int mid, int hi) {

        vector<int> temp;

        int i = lo;
        int j = mid + 1;

        // Compare both halves
        while(i <= mid && j <= hi) {

            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        // Remaining elements of left half
        while(i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        // Remaining elements of right half
        while(j <= hi) {
            temp.push_back(nums[j]);
            j++;
        }

        // Copy sorted elements back
        for(int k = 0; k < temp.size(); k++) {
            nums[lo + k] = temp[k];
        }
    }

    void mergeSort(vector<int>& nums, int lo, int hi) {

        if(lo >= hi)
            return;

        int mid = lo + (hi - lo) / 2;

        mergeSort(nums, lo, mid);
        mergeSort(nums, mid + 1, hi);

        merge(nums, lo, mid, hi);
    }

    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};