class Solution {
public:
    long long countCommas(long long n) {
       long long count=0;
       long long t=1000;
       long long num=n;
        while(num>999){    
            count+=(n-t+1);
            t*=1000;
            num/= 1000;
        }
          
        return count;
    }
};