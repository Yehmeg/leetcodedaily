class Solution {
public:
    int pivotInteger(int n) {
     
        int Sum = n * (n + 1) / 2;

        int x = sqrt(Sum);

        if (x * x == Sum) 
            return x;
        

        return -1;  
    }
};