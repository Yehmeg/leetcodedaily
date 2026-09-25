class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int n =satisfaction.size();
        int ans=0;
        if(satisfaction[n-1]>0) ans+=satisfaction[n-1];
        for( int i=n-2; i>=0;i--){

            if(satisfaction[i]+satisfaction[i+1]>0)
            {
                satisfaction[i]= satisfaction[i]+satisfaction[i+1];

            }

            else break;
            ans +=satisfaction[i];

        }
        
        

        return ans;
    }
};