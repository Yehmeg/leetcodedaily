class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.size();
        long long sum = 0;

        for(int i = n-1; i >= 0; i--){
            sum = (sum + shifts[i]) % 26;

            s[i] = 'a' + (s[i] - 'a' + sum) % 26;
        }

        return s;


        
    }
};