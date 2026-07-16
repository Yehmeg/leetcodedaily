class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        int one= num%10;
        num/=10;
        v.push_back(one);

        int two=num%10;
        num/=10;
        v.push_back(two);

        int three=num%10;
        num/=10;
        v.push_back(three);

        int four=num%10;
        num/=10;
        v.push_back(four);

        sort(v.begin(),v.end());
        int n1= 10*v[0] +v[3];
        int n2= 10*v[1]+ v[2];
        int sum=n1+n2;
        return sum;
    }
};