class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>>grid2 =grid;
        int m = grid[0].size();
        int n=grid.size();

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < m; j++) {

                    int index = i * m + j;  
                    int newIndex = (index + k) % (n* m);
                    int row= newIndex / m;
                    int col = newIndex % m;

                    grid2[row][col]=grid[i][j];

                
            }
        }
        return grid2;
    }
};