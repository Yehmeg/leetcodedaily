class Solution {
public:
    string addBinary(string a, string b) {

        string ans;
        char carry = '0';

        int i = a.size() - 1;
        int j = b.size() - 1;

        // Common part
        while(i >= 0 && j >= 0) {

            if(carry == '0') {

                if(a[i] == '1' && b[j] == '1') {
                    carry = '1';
                    ans.push_back('0');
                }
                else if(a[i] == '1' || b[j] == '1') {
                    carry = '0';
                    ans.push_back('1');
                }
                else {
                    carry = '0';
                    ans.push_back('0');
                }
            }

            else {

                if(a[i] == '1' && b[j] == '1') {
                    carry = '1';
                    ans.push_back('1');
                }
                else if(a[i] == '1' || b[j] == '1') {
                    carry = '1';
                    ans.push_back('0');
                }
                else {
                    carry = '0';
                    ans.push_back('1');
                }
            }

            i--;
            j--;
        }

        // Remaining part of a
        while(i >= 0) {

            if(carry == '1') {

                if(a[i] == '1') {
                    ans.push_back('0');
                    carry = '1';
                }
                else {
                    ans.push_back('1');
                    carry = '0';
                }
            }
            else {
                ans.push_back(a[i]);
            }

            i--;
        }

        // Remaining part of b
        while(j >= 0) {

            if(carry == '1') {

                if(b[j] == '1') {
                    ans.push_back('0');
                    carry = '1';
                }
                else {
                    ans.push_back('1');
                    carry = '0';
                }
            }
            else {
                ans.push_back(b[j]);
            }

            j--;
        }

        if(carry == '1')
            ans.push_back('1');

        reverse(ans.begin(), ans.end());

        return ans;
    }
};