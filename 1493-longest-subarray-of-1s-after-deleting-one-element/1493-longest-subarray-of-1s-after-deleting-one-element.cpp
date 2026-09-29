class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {   //remove=0 mtlb remove is remiaig remove = j when nums[j]=0;
        int n = nums.size();
        int i=0 , j=0;
        int flips=0;
        int maxlen=0;

        while( j< n)
        {
           if(nums[j]==1) j++;
           else {
            if( flips==0){
                flips=1;
                j++;
            }
            else{
                maxlen= max( maxlen, j-i-1);
                while(nums[i]==1) i++;
                i++;
                j++;
                }
            }

        }
        maxlen= max( maxlen, j-i-1);
        return maxlen;
    }
};