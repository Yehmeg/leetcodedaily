class Solution { 
    public: 
    void moveZeroes(vector<int>& arr) { 
        int n = arr.size(); 
        int i = 0; // i will travel at zeroes 
        int j = 0; // j travel for non zeroes 
        
        while(i<n && j<n){ 
            if(arr[i] == 0 && arr[j] != 0){ 
                if(j>i) swap(arr[i],arr[j]); 
                else j++;  
                
            }
            if(arr[i] != 0) i++; 
                
            if(arr[j] == 0) j++;
        }
    }
};
