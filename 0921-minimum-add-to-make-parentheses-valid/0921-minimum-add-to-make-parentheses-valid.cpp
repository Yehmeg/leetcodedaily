class Solution {
public:
    int minAddToMakeValid(string s) {
        int valid=0;
        int open=0;
        for( int i =0; i<s.size(); i++)
        {
            if(s[i]== '(') open++;

            else {
                if( open>0) open--;
                else valid++;
                
            }
        }
        valid+=open;

        return valid;
    }
};