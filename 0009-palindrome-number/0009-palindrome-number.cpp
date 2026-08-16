class Solution {
public:
    bool isPalindrome(int x) {
        string n= to_string(x);
        int i=0;
        int j= n.size()-1;

        while(i <= j){
            if(n[i] != n[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};