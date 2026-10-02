class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool one= false;
        bool zero = false;

        if(n & 1) one= true;
        else zero= true;

        while( n >0)
        {   n>>=1;
            cout<<n<< '\t';
            if(one && (n & 1) ) {
                return false;
            }

            else if (zero && !(n & 1)) {
                return false;
            }
            else {
                if(n & 1 && (zero)) {
                    one= true;
                    zero= false;
                }
                else {
                    one=false;
                    zero=true;
                }
            }

        }
        return true;
    }
};