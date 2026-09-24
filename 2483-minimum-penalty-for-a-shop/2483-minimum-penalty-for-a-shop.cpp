class Solution {
public:
    int bestClosingTime(string customers) {

        int n= customers.size();
        vector<int> yes(n+1,0);
        int val=0;
        //[0,0,0,0,0]

        vector<int> no(n+1,0);

        for( int i= n-1; i>=0;i--)
        {
            if(customers[i]== 'Y') 
                val+=1;
            yes[i]= val;
        }
        // [3,2,1,1,0] yes
        val=0;

        for( int i= 0; i<n ;i++)
        {
            if(customers[i]== 'N') 
                val+=1;
            yes[i+1]+=val;
        }
        
        // [0,0,0,1,1] no
        int ans=0;
        for( int i =0; i<=n; i++)
        {
            // yes[i] = yes[i] + no[i];
            //[3,2,1,2,1]
            if(yes[i] < yes[ans]) ans =i;
        }
        return ans;
    }
};