class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minarr=nums.size()+1;
        int right=0;
        int left=0;
        int sum=0;
        while( right <nums.size())
        {   sum+=nums[right];
                right++;
            while(sum>=target)
            {  int len= right-left;
                minarr=min(minarr,len);
                sum-=nums[left];
                left++;
            }  
              
        }    
            
        if(minarr>nums.size()) return 0;  
    
        return minarr;
    }
};