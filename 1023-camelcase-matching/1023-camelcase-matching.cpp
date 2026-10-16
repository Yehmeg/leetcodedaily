class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        int p =pattern.size();

        for(int i = 0; i < queries.size(); i++) {
            int j = 0, k = 0;
            bool valid = true;

            while(j < queries[i].size()) {
                if(k < p && queries[i][j] == pattern[k]) {
                    j++;
                    k++;
                }
                else if(queries[i][j] >= 'A' && queries[i][j] <= 'Z') {
                    valid = false;
                    break;
                }
                else {
                    j++;
                }
            }

            if(k != p)
                valid = false;

            ans.push_back(valid);
        }

        return ans;
    }
};  