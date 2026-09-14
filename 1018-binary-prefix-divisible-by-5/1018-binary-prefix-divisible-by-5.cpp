class Solution {
public:
    
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans(nums.size(), false);
        string binarys;

        for( int i =0; i<nums.size(); i++)
        {   int rem = 0;

            char ch=nums[i] + '0' ;
            binarys.push_back(ch);

            for (char bit : binarys) {
                rem= (rem * 2 + (bit - '0')) % 5;
            }
            if(rem==0) 
                ans[i]=true;
        }
        return ans;
    }
};