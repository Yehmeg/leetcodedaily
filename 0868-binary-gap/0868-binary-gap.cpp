class Solution {
public:
    int binaryGap(int n) {
        int ans=0;
        int dist=0;
        bool seen =false;

        for(int i =0;i <=31; i++){
            
             
            if(n <1) break;
            if (n & 1 ) {
                if(seen) ans=max(ans,dist);
                dist=1; 
                seen= true;
            }
            else  {
                dist++;
            }
            cout<< n<<endl;
            n >>= 1;
            
           
           
        } 

        return ans;
        
    }
};