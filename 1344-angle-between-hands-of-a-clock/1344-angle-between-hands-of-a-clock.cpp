class Solution {
public:
    double angleClock(int hour, int minutes) {
       double  mindeg=6.00*minutes;
     
       double hrdg=30.00*hour;
        if (hour==12) hrdg=0;

        double extramovehr=0.5*minutes;

       double angle= abs(hrdg+extramovehr-mindeg);
       return min(angle, 360-angle);
    }
};