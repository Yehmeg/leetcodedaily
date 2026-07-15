class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        for(int i=0;i<4;i++){
            int n=num%10;
            num=num/10;
            v.push_back(n);
        }

        sort(v.begin(),v.end());
        int n1= 10*v[0] +v[3];
        int n2= 10*v[1]+ v[2];
        int sum=n1+n2;
        return sum;
    }
};