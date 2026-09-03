class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n= ransomNote.size();
        sort( ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int i=0;
        int j=0;
        while(i< n && j< magazine.size()){
            if( ransomNote[i] == magazine[j]) {
                j++;
                i++;
            }
            else {
                j++;

            }
        }
        return (i== n)?true:false;
    }
};