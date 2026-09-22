class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int n= nums.size();
        int i =0;
        while( i < n){
            int correct= nums[i]-1;
            if(nums[correct]==nums[i]) i++;
            else swap(nums[i], nums[correct]);
        }
        for( int i =0; i<n; i++){
            if(nums[i] != i+1) ans.push_back(i+1);
        }
        return ans;
    }
};