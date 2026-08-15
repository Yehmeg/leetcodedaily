class Solution {
public:
    int countAsterisks(string s) {
        bool flag=true;
        int count=0;
        for( char c:s){
            if(c== '*' && flag) count++;

            if(c== '|'){
                if(flag)
                    flag=false;
                else flag=true;
            }
            
        }
        return count;
    }
};