class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        int n= nums.size();
        vector<int> ans(n, 0);

        for(int i =1; i<n; i++){
            ans[i]=nums[i-1] +sum;
            sum=ans[i];

        }
        sum=nums[n-1];
        for(int i=n-2; i>=0; i--)
        {
            ans[i]= abs(ans[i]-sum);
            sum+=nums[i];

        }
        return ans;
    }
};