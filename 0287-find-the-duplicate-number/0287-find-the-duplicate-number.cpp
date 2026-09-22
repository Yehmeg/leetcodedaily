class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i =0;
        int n= nums.size();

        while( i<n){
            int correctidx= nums[i]-1;
            if(correctidx== i) i++;
            else if( nums[correctidx]==nums[i]) return nums[i];
            else swap( nums[correctidx], nums[i]);
            
        }
        return -1;
    }
};