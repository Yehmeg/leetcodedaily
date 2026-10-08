class Solution {
public:
    int differenceOfSums(int n, int m) {
        int total_sum=n*(n+1)/2;
        int terms= n/m;
        int sum= (terms*(2*m +(terms-1)*m));
        return total_sum -sum;
    }
};