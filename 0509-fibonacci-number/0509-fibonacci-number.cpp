class Solution {
public:
    int fib(int n) {
    if(n<=1) return n;

    int prev = 1;
    int prevprev = 0;
    for(int i=2;i<=n;i++){
        int curri = prev + prevprev;
        prevprev = prev;
        prev = curri;
    }

    return prev;

    }
};