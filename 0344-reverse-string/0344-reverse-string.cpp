class Solution {
public:
    void reverseString(vector<char>& s) {
        int r=s.size()-1;
        int l=0;

        while(l<r){
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;
        }

    }
};