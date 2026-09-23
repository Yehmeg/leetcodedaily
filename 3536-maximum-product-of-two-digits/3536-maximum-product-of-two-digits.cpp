class Solution {
public:
    int maxProduct(int n) {
        string c= to_string(n);
        int mx1=0;
        int idx1=0;
        int mx2=0;
        
        for( int i =0; i < c.size(); i++)
        {
            if( c[i]-'0' >mx1){
                mx1= c[i]-'0';
                idx1=i;
            }           
        }
        for( int i =0; i < c.size(); i++)
        {
            if( c[i]-'0' >mx2 && i != idx1)
                mx2= c[i]-'0';     
        }
        return mx1*mx2;
    }
};