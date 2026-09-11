class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n= arr.size();
       for( int i =0 ; i<n; i++){
            if( arr[i]== 0){
                
                arr.push_back(0);
                i++;
                reverse(arr.begin()+i, arr.end());
                // i++;
                reverse(arr.begin()+i+1, arr.end());
                arr.pop_back();               
            }

       } 

    }
};