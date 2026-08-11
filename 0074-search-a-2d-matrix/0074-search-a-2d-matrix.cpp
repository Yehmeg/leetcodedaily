class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int lo = 0;
        int hi = matrix.size() - 1;
        int lastcol = matrix[0].size() - 1;
        int reqrow = -1;

        // Find the row 
        while(lo <= hi) {

            int mid = lo + (hi - lo) / 2;

            if(matrix[mid][0] <= target && target <= matrix[mid][lastcol]) {
                reqrow = mid;
                break;
            }
            else if(target < matrix[mid][0]) {
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }

        if(reqrow == -1)
            return false;

        // Binary search inside the required row
        lo = 0;
        hi = lastcol;

        while(lo <= hi) {

            int mid = lo + (hi - lo) / 2;

            if(matrix[reqrow][mid] == target)
                return true;

            else if(matrix[reqrow][mid] < target)
                lo = mid + 1;

            else
                hi = mid - 1;
        }

        return false;
    }
};