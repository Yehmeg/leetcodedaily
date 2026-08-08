class Solution {
public:
    bool is_sqroot(int n){
        int lo=0;
        int hi=n;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(1ll* mid*mid==n) return true;
            else if (1ll* mid*mid<n) lo=mid+1;
            else hi=mid-1;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
        int hi=c;
        int lo=0;
        while(lo<=hi){
            if(is_sqroot(lo) && is_sqroot(hi)){
                return true;
            }
            else if(!is_sqroot(hi)){
                hi=(int)sqrt (hi)* (int) sqrt(hi);
                lo=c-hi;
            }
            else 
            {
                lo=((int)sqrt(lo) +1) * ((int)sqrt(lo) +1);
                hi=c-lo;
                
            }
        }
        return false;
    }
};