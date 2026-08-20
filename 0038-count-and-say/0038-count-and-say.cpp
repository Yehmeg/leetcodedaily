class Solution {
public:
  
    string countAndSay(int n) { 
        if(n == 1)
            return "1";
        string str= countAndSay(n-1);
        string ans = "";
        int count = 1;
        char ch= str[0];

        for(int i=1;i<str.size();i++){
            char dh= str[i];

            if(ch==dh)
                count++;
            
            else{
                ans +=( to_string(count)+ch);
                count=1;
                ch=dh;
            }
        }
        ans +=( to_string(count)+ch);

        return ans;

    }
};