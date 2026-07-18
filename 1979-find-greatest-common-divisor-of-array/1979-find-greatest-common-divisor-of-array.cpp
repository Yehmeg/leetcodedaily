class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mi= INT_MAX;
        int ma= INT_MIN;
        for(int i=0;i<nums.size();i++){
            mi=min(mi,nums[i]);
            ma=max(ma,nums[i]);

        }
        
        while(mi){
            int temp=mi;
            mi=ma%mi;
            ma=temp;
            

        }
    return ma;
        
    }
};