class Solution {
public:
    int pivotInteger(int n) {   
        int Sum = n * (n + 1) / 2;
        int x = sqrt(Sum);
        return (x * x == Sum) ?x : -1;
    }
};