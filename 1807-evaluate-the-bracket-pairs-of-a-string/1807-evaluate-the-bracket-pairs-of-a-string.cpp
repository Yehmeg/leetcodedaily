class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        unordered_map<string,string> mp;

        for(auto x : knowledge)
            mp[x[0]] = x[1];

        string ans = "";

        for(int i = 0; i < s.size(); i++) {

            if(s[i] != '(') {
                ans += s[i];
            }
            else {
                string temp = "";

                i++;

                while(s[i] != ')') {
                    temp += s[i];
                    i++;
                }

                if(mp.find(temp) != mp.end())
                    ans += mp[temp];
                else
                    ans += "?";
            }
        }

        return ans;
    }
};