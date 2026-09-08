class Solution {
public:
    void rotate( string &s){
        char first = s[0];
        s.erase(0, 1);
        s.push_back(first);
    }
    int equal( string s){
        int totaleual=0;
        for( int i =0; i+1<s.size(); i++){
            if(s[i]==s[i+1]){
                totaleual++;
                
            }
        }
        return totaleual;
    }
    int countRotations(string s, int k) {
        //gumane pr equal gino 
        int count=0;
        for( int i =0; i< s.size(); i++){
            rotate( s);
            if(equal(s) == k)
                count++ ;
        }
        return count;
    }
};