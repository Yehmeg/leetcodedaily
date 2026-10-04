class Solution {
public:
    bool checkValidString(string s) {

        int openMin = 0;//star is )
        int openMax = 0;//star is (

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                openMin++;
                openMax++;
            }

            else if(s[i] == '*') {
                openMin--;
                openMax++;
            }

            else { // ')'
                openMin--;
                openMax--;
            }

            if(openMax < 0)//star + open < close
                return false;

            if(openMin < 0)// open - star <close meanssome star are null
                openMin = 0;
        }

        return openMin == 0;
    }
};
//"123451*678910(2*)*(**(())))))(())()())(((())())())))))))(((((())*)))()))(()((*()*(*)))(*)()"