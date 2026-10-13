class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for( int i =0 ; i< nums.size(); i++)
        {
            if( nums[i]< 0) nums[i] *= (-1);
        }
        sort( nums.begin(), nums.end());
        int i =0;
        long long sum=0; 
        int j= nums.size()-1;

        while( i< j){
            long long right = nums[j]*nums[j];
            long long left= nums[i]* nums[i];

            sum += right;
            sum -= left;

            i++;
            j--;
        }
        if ( j ==i) sum += nums[i]*nums[i];
        
        return sum;
    }
};