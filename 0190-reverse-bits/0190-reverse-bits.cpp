class Solution {
public:
    int reverseBits(int n) {
        string bit="";
        for(int i=0;i<32;i++){
            
            if((n>>i) & 1) bit.push_back('1');
            else bit.push_back('0');
        }
        cout<<bit;
        int ans=0;
        long long val=1;

        for(int i = 31; i >= 0; i--) {       
            if(bit[i] == '1')
                ans+=val;
            val *= 2;
        }
        return ans;
    }
};