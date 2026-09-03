class Solution {
public:
    string addStrings(string num1, string num2) {
        int idx= max( num1.size(), num2.size());

        string ans;
        int carry =0;
        int i = (int) num1.size()-1;
        int j= (int) num2.size()-1;

        while(i>=0 || j>=0){
            int sum =carry;
            if(i>=0){

                sum+= num1[i]-'0';
                i--;
                
            }
            
            if(j>=0){
                sum+= num2[j]-'0';
                j--;
                
            }
            ans.push_back((sum% 10) +'0');
            carry= sum/10;
        }

        if(carry!=0) ans.push_back(carry+'0');
        reverse(ans.begin(), ans.end());
        return ans;

    }
};