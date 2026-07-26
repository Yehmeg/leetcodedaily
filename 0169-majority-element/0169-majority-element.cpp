class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=nums[1];

        for(int i=0; i< nums.size(); i++){
            int j=i;
            while (j>=1 && nums[j]< nums[j-1]){
                swap (nums[j],nums[j-1]);
                j--;
            }

        }

        return nums[nums.size() / 2];
        
    }
};