class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0;
        int count=0;
        for(int i :nums){
            if(i%6==0 ) {
                sum+=i;
                count++;
            }
        }
        if(!count) return 0;
        return sum/count;
    }
};