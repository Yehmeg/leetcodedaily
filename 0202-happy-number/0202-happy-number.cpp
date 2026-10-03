class Solution {
public:
    bool isHappy(int n) {
        
        
        set<int>seen;//stores unique value and finds val easliy and fast

        bool flag =false;
        while(n!= 1){
            if(seen.count(n)) return false; //powersum is repeating 
            seen.insert(n);
            
            int powersum=0;
            
            while(n>0){
                int rem= n%10;  
                n= n/10;
                powersum+= (rem*rem);
               
            }
            n=powersum;
        }
    return true; 
    }
};
//2==4==16==37==58==89==145==42==20==4
// 6 =36= 9+36 ::: 49 = 16+81 == 97