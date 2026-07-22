class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        
        int tf=arr.size()*(0.25);
        int count=0;
        int ans=arr[0];
        for (int i=0;i<arr.size()-1;i++){
            if (arr[i]==arr[i+1])
                count++;
            else count =1;
            if (count > tf ){ 
                ans= arr[i];
                break;
            }
        }
    return ans;

    }

};