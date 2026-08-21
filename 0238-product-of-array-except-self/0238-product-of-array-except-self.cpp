class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int idx=0;
        int prod=1;
        int woz= 1;
        int count =0;

        for( int i=1; i< nums.size(); i++){
            prod *= nums[i];

            if(nums[i]!=0) woz *=nums[i];
            else count ++;
        }
        
        ans.push_back(prod);
        idx++;
        prod*=nums[0];
        if(count>1) woz=0; 
        while( idx<nums.size() ){
            int temp =prod;

            if(nums[idx]!=0)
                temp/= nums[idx];
            else temp =woz* nums[0];
            
            ans.push_back (temp);
            idx++;
            
        }
        return ans;
    }
};