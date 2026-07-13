class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string ans="";
        int n=strs.size();

        int len = min(strs[0].size(), strs[n-1].size());

        for (int i = 0; i < len; i++){

            if (strs[0][i]==strs[n-1][i]) ans.push_back(strs[0][i]);
            else break;
        }
        return ans;
        }
};