class Solution {
public:
    int missingInteger(vector<int>& nums) {
    
        int sum=nums[0];
        int j=0;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i-1] + 1){
                sum += nums[i];
                j=i;
            }
            else
                break;
        }

        bool found = true;

        while(found) {
            found = false;

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == sum) {
                    found = true;
                    sum++;
                    break;
                }
            }
        }

        return sum;
    }
};