class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set< int> num;
        
        vector<int> ans;
        for (int x : nums) {
            if (num.count(x)) {
                ans.push_back(x);
            }
            num.insert(x);
        }
        return ans;
    }
};