class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr = nums[0];
        for (int i=1; i<nums.size(); i++)
            xr^=nums[i];
    
        return xr;
    }
};