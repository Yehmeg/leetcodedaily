class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n= pref.size();
        int count=0;

        for( int i =0 ;i <words.size(); i++)
        {
            // if(words[i].substr(0,n)==pref) count++;
            if(words[i].starts_with(pref)) count++;
        }
    return count;
    }
};