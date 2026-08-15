class Solution {
public:
    int maximumSwap(int num) {
        
        string s=to_string(num);

            
        for(int i=0;i<s.size();i++){
            int maxidx =i;

            for(int j =i; j <s.size(); j++) {
                if(s[j] >= s[maxidx])
                    maxidx = j;
            }
            if(s[i]<s[maxidx]){
                swap(s[maxidx],s[i]);
                break;
            }
        }

       
        return stoi(s);

    }
};
