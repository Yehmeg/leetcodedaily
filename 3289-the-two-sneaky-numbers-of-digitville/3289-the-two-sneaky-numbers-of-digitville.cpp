class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set< int> num;
        
        vector<int> ans;

        for (int x : nums) {
            if (num.count(x)) {
                ans.push_back(x);
            }
            if(ans.size()==2) return ans;
            num.insert(x);
        }
        return ans;
    }
};