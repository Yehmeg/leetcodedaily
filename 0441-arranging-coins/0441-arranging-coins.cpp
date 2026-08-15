class Solution {
public:
    int arrangeCoins(int n) {
        long long lo=0;
        long long hi=n;

         while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            long long m=mid*(mid+1)/2;

            if(m==n) return int(mid);
            else if(m>n) hi=mid-1;
            else lo=mid+1;
         }
    
     return hi;   
    }
};