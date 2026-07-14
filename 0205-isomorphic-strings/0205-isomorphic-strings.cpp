class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;

        vector<int> arr(150, 1000);
        for (int i=0;i<s.size();i++){
            int idx=int(s[i]);
            if (arr[idx]==1000) arr[idx]= t[i]-s[i];

            else if(arr[idx]!=1000) {
                if (arr[idx]!=t[i]-s[i])  return false;
               
            }
        
        }
        for (int i=0;i<150;i++){
            if(arr[i]!=1000) arr[i]=1000;
        }

        for (int i=0;i<t.size();i++){
            int idx=int(t[i]);
            if (arr[idx]==1000) arr[idx]= t[i]-s[i];

            else if(arr[idx]!=1000) {
                if (arr[idx]!=t[i]-s[i])  return false;
               
            }
        
        }

        return true;



    }
};