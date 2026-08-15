class Solution {
public:
    bool isSubsequence(string s, string t) {
       int idx=0;
        for(int i=0;i<s.size();i++){
            bool flag=false;
            for(int j=idx;j<t.size();j++){
                if(t[j]==s[i]) {
                    flag=true;
                    idx=j+1;
                    break;
                }
            }
            if(!flag) return false;
        }
        return true;
    }
};
// class Solution {
// public:
//     bool isSubsequence(string s, string t) {

//         int idx = 0;

//         for(int i = 0; i < s.size(); i++) {

//             bool flag = false;

//             for(int j = idx; j < t.size(); j++) {

//                 if(t[j] == s[i]) {
//                     flag = true;
//                     idx = j + 1;   // next search starts after this
//                     break;
//                 }
//             }

//             if(!flag) return false;
//         }

//         return true;
//     }
// };