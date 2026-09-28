class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int flip=0,i =0, j=0;
        int maxlen=INT_MIN;
        while( j<nums.size())
        {
            if(nums[j] ==1) j++;
            else {
                if(flip<k){
                    j++;
                    flip++;
                }
                else {
                    //flips==k
                    maxlen= max( maxlen, j-i);
                    while(nums[i]== 1) i++;
                    i++;
                    j++;
                }
            }
            maxlen= max( maxlen, j-i);
        }
        return maxlen;
    }
};