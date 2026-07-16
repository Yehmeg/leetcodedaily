class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0,s=0;
        vector<int>v;

        while(n>0){
            v.push_back( n%10 ) ;
            n=n/10;
            s++;          
        }
        if(s%2 ==0 ){
            for(int i=0;i<s;i+=2){
                sum-=v[i];
                sum+=v[i+1];
            }

        }
        else{
            for(int i=0;i<s-1;i+=2){
                sum+=v[i];
                sum-=v[i+1];
            }
            sum+=v[s-1];

        }

        return sum;       
    }
};