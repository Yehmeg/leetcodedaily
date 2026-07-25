class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int end=nums.size()-1;
        long long ans=0;
        int start=0;
        
        
        while(start < end){
            string s= "";
            s += to_string(nums[start]);
            s+=to_string(nums[end]);

            ans+=stoll(s);

            start++;
            end--;

        }
        if(start==end){
            ans+=nums[start];

        }
    return ans;
    }
};