class Solution {
public:
    int smallestNumber(int n) {
        //101 ->111
        //10 isse phle 8 aata h 2pwer 3 then 16> 10 so ans is 16-1
        int power=1;
        for( int i =1;i<32;i++){
            power*=2;
            if(power > n) return power-1;
        }
        return 1;
    }
};