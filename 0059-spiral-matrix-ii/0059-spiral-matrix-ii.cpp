class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n));
        int min_r = 0;
        int min_c = 0;
        int max_r = n;
        int max_c = n;

        int idx = 0;
        int val=1;


        while (val<=n*n) {

            // right
            for (int a = min_c; a < max_c; a++) {
                v[min_r][a]=val;
                val++;
            }
            min_r++;

            // down
            for (int a = min_r; a < max_r; a++) {
                v[a][max_c - 1]=val;
                val++;
            }
            max_c--;

            if (!(min_r < max_r && min_c < max_c))
                break;

            // left
            for (int a = max_c - 1; a >= min_c; a--) {
                v[max_r - 1][a]= val;
                val++;
            }
            max_r--;

            // up
            for (int a = max_r - 1; a >= min_r; a--) {
                v[a][min_c]=val;
                val++;
            }
            min_c++;
        }
        return v;  
    }

};