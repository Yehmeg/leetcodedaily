class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n= stones.size();

        for( int i = n-1 ; i>0; i--){
            sort( stones.begin(), stones.end());
            stones[ i-1]= stones[i]- stones[i-1];
            stones.pop_back();
            
        }
        return stones[0];
    }
};