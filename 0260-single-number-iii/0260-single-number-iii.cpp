class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        if(nums.size()==2) return nums;
        sort( nums.begin(), nums.end());
            //1 1 2 2 3 5
            int i =0;
        while( i< nums.size()-1){
            if( nums[i] == nums[i+1]) 
                nums.erase(nums.begin()+i, nums.begin()+i+2);
            else i++;
           
        }
        return nums;
    }
};