class Solution {
public:
    string addBinary(string a, string b) {

        string ans;
        char carry = '0';

        if(a.size() < b.size()) {
            a = string(b.size() - a.size(), '0') + a;
        }
        else if(b.size() < a.size()) {
            b = string(a.size() - b.size(), '0') + b;
        }

        // Common part
        int i = a.size()-1;

        while(i >= 0 ) {

            if(carry == '0') {

                if(a[i] == '1' && b[i] == '1') {
                    carry = '1';
                    ans.push_back('0');
                }
                else if(a[i] == '1' || b[i] == '1') {
                    carry = '0';
                    ans.push_back('1');
                }
                else {
                    carry = '0';
                    ans.push_back('0');
                }
            }

            else {

                if(a[i] == '1' && b[i] == '1') {
                    carry = '1';
                    ans.push_back('1');
                }
                else if(a[i] == '1' || b[i] == '1') {
                    carry = '1';
                    ans.push_back('0');
                }
                else {
                    carry = '0';
                    ans.push_back('1');
                }
            }

            i--;
            
        }  

        if(carry == '1')
            ans.push_back('1');

        reverse(ans.begin(), ans.end());

        return ans;
    }
};