class Solution {
public:
    bool isPowerOfTwo(int n) {
        long num=1;
        while( num< n)
        {
            num= num << 1;
            
        }
    return (num==n) ?true: false;
    }
};