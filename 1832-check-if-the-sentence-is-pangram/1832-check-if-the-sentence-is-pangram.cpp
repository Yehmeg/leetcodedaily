class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(), sentence.end());
        int j=0;
        char c= 'a';
        for(int i = 0; i < sentence.length(); i++) {

            c = 'a' + j;
            if ( sentence[i] == c) j++;
        }
        if( j!= 26) return false;
        return true;
    }
};