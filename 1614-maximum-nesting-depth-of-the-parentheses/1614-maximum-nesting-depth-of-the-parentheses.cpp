class Solution {
public:
    int maxDepth(string s) {
        int len=0, ans=0;
        for(char c: s)
        {
            if(c=='(') len++;
            else if(c ==')') len--;
            ans= max(len,ans);
        }
        return ans;
    }
};