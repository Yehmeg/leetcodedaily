class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {

        vector<int> maxDim = dimensions[0];

        int maxDiagonal = maxDim[0] * maxDim[0] +
                          maxDim[1] * maxDim[1];

        for (int i = 1; i < dimensions.size(); i++) {

            int currDiagonal = dimensions[i][0] * dimensions[i][0] +
                               dimensions[i][1] * dimensions[i][1];

            if (currDiagonal > maxDiagonal) {

                maxDiagonal = currDiagonal;
                maxDim = dimensions[i];
            }
            else if (currDiagonal == maxDiagonal) {

                int currArea = dimensions[i][0] * dimensions[i][1];
                int maxArea = maxDim[0] * maxDim[1];

                if (currArea > maxArea) {
                    maxDim = dimensions[i];
                }
            }
        }

        return maxDim[0] * maxDim[1];
    }
};