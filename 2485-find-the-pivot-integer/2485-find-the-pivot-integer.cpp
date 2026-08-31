class Solution {
public:
    int pivotInteger(int n) {
        int sumright= n ;
        int sumleft=1;
        int lo=1;
        int hi= n;

        while( lo <= hi ){
            if( sumright== sumleft && lo ==hi ) return lo;
            else if( sumright > sumleft) {
                
                lo++;
                sumleft+=lo;

            }
            else if( sumright < sumleft){
                hi--;
                sumright+= hi;
            }
            else {
                lo++;
                sumleft+=lo;
                hi--;
                sumright+= hi;
            }
        }
        return -1;
    }
};