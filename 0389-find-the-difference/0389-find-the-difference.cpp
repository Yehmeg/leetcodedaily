class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i=0; i< s.size();i++){
            for(int j=0;j < t.size(); j++){
                if(s[i]==t[j]){ t.erase(t.begin()+j);
                    break;
                }
            }
        }
        char ans=t[0];
        return ans;
    }
};