class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        long long sum=0;
        long long place=1;
        while (n>0){
            int rem=n%10;
            n/=10;
            if(rem==0) continue;         
            ans= ans+(rem*place);
            sum+=rem;
            place*=10;
        }
        return ans*sum;
    }
};