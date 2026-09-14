class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int idx= nums.size()/2;
        int mid= nums[idx];
        for( int i =0 ;i < nums.size() ;i++){
            if(i==idx) continue;
            if(nums[i]==mid) return false;
        }
        return true;
    }
};