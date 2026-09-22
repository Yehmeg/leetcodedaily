class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i =0;
        int n= nums.size();

        while( i<n){
            // as 0 se nhi start to we will throw each element from 0 to its right place 
            //if the right place have alredy its right value means the value at current time at index 0 is ans
            
            int correctidx= nums[i];
            // if(correctidx== i) i++;
            if( nums[correctidx]==nums[i]) return nums[i];
            else swap( nums[correctidx], nums[i]);
            
        }
        return -1;
    }
};