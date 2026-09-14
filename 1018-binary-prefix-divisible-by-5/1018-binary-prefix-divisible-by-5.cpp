class Solution {
public:
    
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans(nums.size(), false);
        string binarys;
        int rem=0;

        for( int i =0; i<nums.size(); i++)
        {   
            char bit=nums[i] + '0' ;
            rem= (rem * 2 + (bit - '0')) % 5;        
            if(rem==0) 
                ans[i]=true;
        }
        return ans;
    }
};