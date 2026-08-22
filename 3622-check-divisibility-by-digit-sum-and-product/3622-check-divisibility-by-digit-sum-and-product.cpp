class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0;
        int prod =1;
        int totalsum=0;
        int original=n;

        while( n){
            int lastval= n%10 ;

            sum+= lastval;
            prod*= lastval;
            n=n/10;

        }
        totalsum= sum+ prod;
        if( original% totalsum == 0){
            return true;
        }
        else return false;
    }
};