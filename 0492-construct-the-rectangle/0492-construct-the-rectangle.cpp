class Solution {
public:
    vector<int> constructRectangle(int area) {
        int r = sqrt(area);

        vector<int> ans(2);

        while(r >= 1) {

            if(area % r == 0) {
                ans[0] = area / r;   // l
                ans[1] = r;
                return ans;
            }

            r--;
        }

        return ans;
    }
};