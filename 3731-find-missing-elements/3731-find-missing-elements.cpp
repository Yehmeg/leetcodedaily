class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int end=nums.size()-1;
        int j=nums[0];
        int i=0;
        vector<int>ans;

        while(j< nums[end]){
            if(j!=nums[i]) {
                ans.push_back(j);
                j++;
            }
            else {
                i++;
                j++;
            }
        }
        return ans;
    }
};