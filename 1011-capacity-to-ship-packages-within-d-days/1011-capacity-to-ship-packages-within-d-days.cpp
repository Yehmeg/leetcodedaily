class Solution {
public:
    bool check_cap(int mid,vector<int>weights,int days){
        int n=weights.size();
        int m=mid;
        int count=1;
        for(int i=0;i<n;i++){
            if(m>=weights[i]) m-=weights[i];
            else {
                m=mid;
                count++;
                m-=weights[i];
            }
  
        }
       
        if(count<=days) return true;
        else return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo=INT_MIN;
        int hi= 0;
        int ans=-1;
        for(int i=0;i<weights.size();i++){
            hi+=weights[i];
            lo=max(weights[i],lo);
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check_cap(mid,weights,days)){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }

    return ans;
    }
};