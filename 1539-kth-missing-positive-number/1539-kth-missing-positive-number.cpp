class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int val=0;
        int idx=0;

        for (int i =1; ;i++){
            
            if( idx<arr.size() && arr[idx] == i ){
                idx++;
            }
            else val++;

            if(val==k)
                return i;
        

        }
    return 0;
    }
};