class Solution {
public:
    bool check(string& a, string& b, int i, int j) {
        while(i < j) {
            if(a[i] != b[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    bool checkPalindromeFormation(string a, string b) {
        int n = a.size();
        int i = 0, j = n - 1;

        while(i < j && a[i] == b[j]) {
            i++;
            j--;
        }

        if(check(a, a, i, j) || check(b, b, i, j))
            return true;

        i = 0;
        j = n - 1;

        while(i < j && b[i] == a[j]) {
            i++;
            j--;
        }

        return check(a, a, i, j) || check(b, b, i, j);
    }
};