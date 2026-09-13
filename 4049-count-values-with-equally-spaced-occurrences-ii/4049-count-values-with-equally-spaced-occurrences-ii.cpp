class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
         map<int, vector<int>> pos;

        for(int i = 0; i < nums.size(); i++) {
            pos[nums[i]].push_back(i);
        }
       

        int count = 0;

        for(auto [x, indices] : pos) {

            // Need at least 3 occurrences
            if(indices.size() < 3)
                continue;

            int diff = indices[1] - indices[0];

            bool special = true;

            for(int i = 2; i < indices.size(); i++) {
                if(indices[i] - indices[i-1] != diff) {
                    special = false;
                    break;
                }
            }

            if(special)
                count++;
        }

        return count;
    }
};