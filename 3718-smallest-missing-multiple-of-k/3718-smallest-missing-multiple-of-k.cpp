class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        int mul=1;
        sort( nums.begin(), nums.end());

        for( int i =0;i < nums.size(); i++){

            int to_check=k*mul;
            if( nums[i] == to_check) mul++;

            else if( nums[i] > to_check) return to_check;
        }
    
        return k*mul;

    }
};