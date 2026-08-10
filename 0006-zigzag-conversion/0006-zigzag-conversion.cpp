class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1 || numRows >= s.size())
            return s;

        string ans;
        int n = s.size();

        for (int row = 0; row < numRows; row++) {

            int usedRows = row;
            int remainingRows = numRows - row - 1;

            int idx = row;
            bool useRemaining = true;

            while (idx < n) {

                ans.push_back(s[idx]);

                // First jump = 2 * remaining rows
                if (remainingRows > 0 && useRemaining) {
                    idx += 2 * remainingRows;
                }
                // Second jump = 2 * used rows
                else {
                    idx += 2 * usedRows;
                }

                // Middle rows alternate between the two jumps
                if (row != 0 && row != numRows - 1)
                    useRemaining = !useRemaining;
            }
        }

        return ans;
    }
};