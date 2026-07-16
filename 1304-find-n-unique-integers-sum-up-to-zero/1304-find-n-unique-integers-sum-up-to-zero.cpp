class Solution {
public:
    vector<int> sumZero(int n) {
        int l=floor(n/2);
        vector<int>arr;
        int val=1;

        for(int i=0;i<l; i++){

            arr.push_back(val);
            arr.push_back(-val);
            val++;

        }
        if(n%2!=0) 
         arr.push_back(0);
    return arr;
    }
};