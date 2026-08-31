class Solution {
public:
    bool selfdivide ( int i){
         int num = i;

        while( num!=0){
            int rem = num%10;
            if( rem ==0|| ( i % rem) !=0 ) return false;
            num /=10;

        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int > ans;

        for( int i = left ; i <= right; i++ )
        {
            if(selfdivide( i)) ans.push_back(i);
        }
        return ans;
    }
};