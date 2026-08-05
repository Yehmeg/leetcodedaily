class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int negidx=1;
        int posidx=0;
        vector<int>ans(nums.size());
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0 ) {
                ans[posidx]=nums[i];
                posidx+=2;
            }
            else {
                ans[negidx]=nums[i];
                negidx+=2;
            }
        }
        return ans;
    }
};