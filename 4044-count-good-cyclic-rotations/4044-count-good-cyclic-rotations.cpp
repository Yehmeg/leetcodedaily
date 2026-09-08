class Solution {
public:
    
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int half = n / 2;
        
        long long firstSum = 0;
        long long secondSum = 0;
        
        for(int i = 0; i < half; i++) {
            firstSum += nums[i];
        }
        
        for(int i = half; i < n; i++) {
            secondSum += nums[i];
        }
        
        int ans=0;
        if(firstSum > secondSum)
            ans++;
        int mid =nums.size()/2;

        for(int i = 1; i < n; i++) {

            int out = nums[i - 1];
            int in = nums[(i - 1 + mid) % n];
        
            firstSum = firstSum - out + in;
            secondSum = secondSum - in + out;
        
            if(firstSum > secondSum)
                ans++;
        }
        return ans;
        }
};