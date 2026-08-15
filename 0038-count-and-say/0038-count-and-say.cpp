class Solution {
public:
  
    string check(int n, string s){
        if(n == 1)
            return s;

        string ans = "";
        int count = 1;

        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])
                count++;
            
            else{
                ans += to_string(count);
                count=1;
                ans += s[i-1];
            }
        }
        ans += to_string(count);
        ans += s.back();
        return check(n-1,ans);
    }

    string countAndSay(int n) { 
        return check(n,"1");

    }
};