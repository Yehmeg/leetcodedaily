class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1;
        int hi =INT_MIN;
        int n=piles.size();
        

        for(int i:piles){
            hi=max(hi,i);
        }

        if(n==h) return hi;//req hours ==number of piles return the max no. of bananas;

        int ans=lo;

        while(lo<=hi){

            int mid=lo+(hi-lo)/2;
            long long hreq=0;
            for(int i: piles){
                hreq+=(i+mid-1)/mid;
            }
       

            if(hreq <= h) {
                ans = mid;
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }

        }
        return ans;
    }
};