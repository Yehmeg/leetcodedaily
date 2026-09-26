class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        //0==not grumpy //1== grumpy
        int n=customers.size();
        
        int sum=0;
        int prevsum=0;
        for( int i =0; i<n; i++)
        {   if(i<minutes && grumpy[i]==1) prevsum+=customers[i];
            if(grumpy[i]==0) sum+=customers[i];
        }
        int i=1;
        int j= minutes;
        int maxprev=prevsum;
        
        while(j<n)
        {   if(grumpy[j]==1)
                prevsum+= customers[j];
            if(grumpy[i-1]==1)
                prevsum-=customers[i-1];
            if(maxprev<prevsum){
                maxprev=prevsum;
            }
            i++;
            j++;
            
        }
        return sum+maxprev;
    }
};