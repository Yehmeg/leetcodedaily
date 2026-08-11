class Solution {
public:
    double angleClock(int hour, int minutes) {
       float  mindeg=6.00*minutes;
     
       float hrdg=30.00*hour;
        if (hour==12) hrdg=0;

        float extramovehr=0.5*minutes;

       float angle= abs(hrdg+extramovehr-mindeg);
       return min(angle, 360-angle);
    }
};