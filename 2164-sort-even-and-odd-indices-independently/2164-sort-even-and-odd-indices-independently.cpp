class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        vector<int> evenCount(101, 0);
        vector<int> oddCount(101, 0);

  
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                evenCount[nums[i]]++;
            else
                oddCount[nums[i]]++;
        }

        // Fill even indices (ascending)
        int ansIndex = 0;
        for (int i = 1; i <= 100; i++) {
            while (evenCount[i] > 0) {
                ans[ansIndex] = i;
                ansIndex += 2;
                evenCount[i]--;
            }
        }

        // Fill odd indices (descending)
        ansIndex = 1;
        for (int i = 100; i >= 1; i--) {
            while (oddCount[i] > 0) {
                ans[ansIndex] = i;
                ansIndex += 2;
                oddCount[i]--;
            }
        }

        return ans;
    }
};