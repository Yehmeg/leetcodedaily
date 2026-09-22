class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        while(i <n){
            if (nums[i]<=0 || nums[i]>n ) i++; //remove out of bound
            else if(nums[nums[i]-1]==nums[i] ) i++; 
            //nums[correct idx] = nums[i] or nums[i] present at correct position [2,3,2,4] here swapping 2 , 2 is waste and [1,3,2,4] here 2 already present at correct position so no need to look;
            else swap(nums[nums[i]-1], nums[i]);

        }
        for( int j=0; j<n; j++){
            cout<<nums[j];
            if(nums[j] !=j+1) return j+1;
        }
        return n+1;
    }
};