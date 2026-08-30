class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1) return 1;
        int min_dx=0;
        int max_dx=0;
        for( int i =0; i< nums.size(); i++)
        {
            if(nums[ i] > nums[ max_dx]) max_dx= i;
            if( nums[ i] < nums[ min_dx]) min_dx= i;
        }
        
       
        int ans =n;
        //case 1 del all from left
        // Delete both from left
        int left = max(min_dx, max_dx) + 1;

        // case 2 del all from right
        // Delete both from right
        int right = n - min(min_dx, max_dx);

        // case 3 del form both sides
        // Delete one from left and one from right
        int both1 = min_dx + 1 + (n - max_dx);
        int both2 = max_dx + 1 + (n - min_dx);

        return min({left, right, both1, both2});

    }
};