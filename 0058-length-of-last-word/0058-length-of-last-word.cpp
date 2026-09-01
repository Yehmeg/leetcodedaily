class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0;
        int i =s.size()-1;
        for ( ; i>=0; i--){
            if(s[i] ==' ') continue;
            else break;
        }
        for(; i>=0; i--){
            
            if (!(isalpha(s[i]))) break;
            count++;
        }
        return count;
    }
};