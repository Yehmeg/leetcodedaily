class Solution {
public:
    int minBitFlips(int start, int goal) {
        int change=0;
        if( start==goal) return change;
        while( start >0 || goal>0)
        {   if (start & 1) // start ka lsb is 1
            {
                if( !( goal & 1))// goal ka last bit 0
                    change++;
            }
            else  // start ka last bit is 0
            {
                if (goal & 1)//goal la last bit is 1
                    change++;
            }
            start >>= 1;
            goal>>=1;
        }
        return change;

    }
};