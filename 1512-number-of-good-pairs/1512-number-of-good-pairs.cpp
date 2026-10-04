class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        sort( nums.begin(), nums.end());
        for( int i =0 ; i<nums.size()-1 ;i++ )
        {   int j=i+1;
            while(j<nums.size() && nums[i]== nums[j]){
                count++;
                j++;

            }
        }

        return count;
    }
};