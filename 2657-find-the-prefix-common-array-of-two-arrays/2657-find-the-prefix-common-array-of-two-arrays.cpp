class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n =A.size();
        vector< int> index(n);
        int count=0;

        for( int i =0 ; i< n; i++)
            for(int j=0 ; j<n ;j++)
                if(A[i] ==B[j]) index[i] =j;
    
        vector< int> ans(n,0);

        for( int i =0 ; i< n ;i++)
        {
            if( i <= index[i] ) ans[index[i]] ++;
            else ans[i]++;
        }
        for( int i =1 ; i<n ;i++)
            ans[i]+=ans[i-1];
        return ans;
    }
};