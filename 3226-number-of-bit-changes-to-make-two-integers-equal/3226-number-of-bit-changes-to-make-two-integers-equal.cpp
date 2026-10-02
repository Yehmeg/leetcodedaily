class Solution {
public:
    int minChanges(int n, int k) {
        if( n ==k) return 0;
      

        long long change =0;
        while( n >0 || k > 0 ){
            if ( n & 1){ //last of n is 1
                if( k & 1) change+=0; // last of k is also 1
                else change++; //last of k is 0
            }
            else { //last of n is 0
                if( k & 1) return -1; //last of k is 1
            }
            k>>=1;
            n>>=1;
        }
        return change;
    }
};
//14= 1110
//13= 1101