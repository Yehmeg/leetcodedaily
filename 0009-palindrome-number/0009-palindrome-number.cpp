class Solution {
public:
    bool isPalindrome(int x) {
        int original=x,rev=0 ,rem=0;
        while(x>0){
            if (rev > (INT_MAX - rem) / 10) {
                return false; 
            }
            rem= x%10;
            rev=rev*10 +rem;
            x=x/10;
        }
        if (rev==original){
            return true;
        }
        else{
            return false;
        }
        
    }
};