class Solution {
public:
    void pntsubset(vector<int>& nums,vector<int>ans, vector<vector<int>> &finalans,int idx){
        if(idx==nums.size()){
            finalans.push_back(ans);
            return ;
        }
        ans.push_back(nums[idx]);
        pntsubset(nums,ans,finalans,idx+1);
        ans.pop_back();
        pntsubset(nums,ans,finalans,idx+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>finalans;

        pntsubset(nums,ans,finalans,0);
        return finalans;

    }
};