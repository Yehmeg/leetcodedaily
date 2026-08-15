class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int lo=0;
        int n=nums.size();
        int hi=n-1;
        int ans=0;
        int pos=n;
        if(nums[0]>0) return nums.size();

        while(lo<=hi){//positive
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>0){
                pos=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        int positive=n-pos;
        lo=0;
        hi=n-1;
        int negend=-1;

        while(lo<=hi){//positive
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<0){
                negend=mid;
                lo=mid+1;
            }
            else hi=mid-1;

        }
        
        int negative = negend + 1;

        return max(positive, negative);
        
    }
};