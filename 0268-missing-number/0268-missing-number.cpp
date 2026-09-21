class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i<n){
            int correctidx=nums[i];
            if(correctidx ==i || correctidx==n)
                i++;
            else swap(nums[i], nums[correctidx]);
        }
        for(int i =0; i<n;i++){
            if(i!= nums[i]) return i;
        }

    return n;

    }
};