class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int prod=1;
        int pz= 1;
        int count =0;
        for( int i=0; i< nums.size(); i++){        
            if(nums[i]==0) count ++;
            prod *= nums[i];
            if(nums[i]!=0) pz *= nums[i];
        }       
        if(count>1) pz=0; 
        for(int i=0 ; i <nums.size() ; i++){
            if(nums[i]==0) nums[i]=pz;
            else nums[i]=prod/nums[i];         
        }
        return nums;
    }
};
//class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {

//         int n = nums.size();
//         vector<int> ans(n, 1);

//         // Product of everything to the left
//         int left = 1;
//         for(int i = 0; i < n; i++) {
//             ans[i] = left;
//             left *= nums[i];
//         }

//         // Product of everything to the right
//         int right = 1;
//         for(int i = n - 1; i >= 0; i--) {
//             ans[i] *= right;
//             right *= nums[i];
//         }

//         return ans;
//     }
// };