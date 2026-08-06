class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=0;i<t;i++){
            int ans=n;
            int tocomp=1;
            while(ans){
                int temp=ans%10;
                tocomp*=temp;

                ans=ans/10;
            }
            if(tocomp%t==0) return n;
            else n++;
        }
        return 0;
    }
};