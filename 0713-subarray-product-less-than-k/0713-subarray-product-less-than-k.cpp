class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {   if(k<1) return 0; //k can be 0 but nums[i] !=0
        int left=0, right=0;
        int product=1;
        int ans=0;
        for( ; right<nums.size(); right++)

        {
            if(nums[right]>=k) {
                product=1;
                left=right+1;
                continue;
            }
            product*=nums[right];
            while( product >= k && left<nums.size()){
                product/=nums[left];
                left++;
            }
            ans+=(right-left)+1;
        }
        return ans;
    }
};