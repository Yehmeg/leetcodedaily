class Solution {
public:
    int arrangeCoins(int n) {
        int update_n=n;
        for(int i=1;i <= n; i++){
           update_n=update_n-i;
            if(update_n<0){
                return i-1;
            }
            if (update_n==0){
                return i;
            }

        }
     return -1;   
    }
};