class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int negidx=1;
        int posidx=0;
        vector<int>ans(nums.size());
        for(int i : nums ){
            if(i>0 ) {
                ans[posidx]=i;
                posidx+=2;
            }
            else {
                ans[negidx]=i;
                negidx+=2;
            }
        }
        return ans;
    }
};