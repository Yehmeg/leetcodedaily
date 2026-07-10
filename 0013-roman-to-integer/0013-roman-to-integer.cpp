class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        reverse (s.begin(), s.end());
        int max=1;


        for (int i=0;s[i]!='\0'; i++){
                int val;
                if (s[i]=='I') {
                    val=1;
                    if(max <= val){
                        sum+=val;
                        max=val;
                    }
                    else sum-=val;
                }
                else if (s[i]=='V') {
                    val=5;
                    if(max <= val){
                        sum+=val;
                        max=val;
                    }
                    else sum-=val;
                }
                else if (s[i]=='X'){
                    val=10;
                    if(max <= val){
                        sum+=val;
                        max=val;
                    }
                    else sum-=val;
                }
                else if (s[i]=='L'){
                    val=50;
                    if(max <= val){
                        sum+=val;
                        max=val;
                    }
                    else sum-=val;
                }
                else if (s[i]=='C') {
                    val=100;
                    if(max <= val){
                        sum+=val;
                        max=val;
                    }
                    else sum-=val;
                }
                else if (s[i]=='D'){
                    val=500;
                    if(max <= val){
                        sum+=val;
                        max=val;
                    }
                    else sum-=val;
                }
                else if (s[i]=='M') {
                    val=1000;
                    if(max <= val){
                        sum+=val;
                        max=val;
                    }
        
                }

        }
    return sum;
    }
};