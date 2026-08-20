class Solution {
public:
    string helper(string str, int k, string ans) {

        int n = str.length();

        if(n == 0)
            return ans;

        int fact = 1;

        for(int i = 2; i <= n - 1; i++)
            fact *= i;

        int idx = (k - 1) / fact;

        char ch = str[idx];

        ans += ch;
        str.erase(str.begin() + idx);

        k = (k - 1) % fact + 1;

        return helper(str, k, ans);
    }

    string getPermutation(int n, int k) {

        string str = "";

        for(int i = 1; i <= n; i++)
            str += to_string(i);

        return helper(str, k, "");
    }
};