class Solution {
public:
    double myPow(double x, long long n) {
        double startx=1, i=0;
    if(x==1) return x;
    if (n<0){
        x=1/x;
        n=-n;
    }
      
    if (n==0) return 1;
    
    
    while(n>0){
        if (n%2==1){
            startx*=x;
        }
        x*=x;
        n/=2;
    }
     return startx; 
    }
};