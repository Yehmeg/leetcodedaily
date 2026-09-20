class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int idx=1;
        for( char c: s){
            int temp= c -'a';
            temp =26-temp;
            ans+= idx*temp;
            idx++;
        }
        return ans;
    }
};