class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max_diff=-1;
        int mn=nums[0];

        for(int i=1;i<nums.size();i++){
            

            if(nums[i] > mn)
                max_diff = max(max_diff, nums[i]- mn);
            
            mn=min(nums[i],mn);
            
        }
        return max_diff;
    }
};