class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>ans(2,0);

        for(int i = 0; i < 32; i++) {
            if((n >> i) & 1 ){
                if(i%2!=0)
                    ans[1]++;
                else 
                    ans[0]++;
            }
        }
        
        
        return ans;
    }
};