class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            int idx=-1;
            for(int j=0;j< nums2.size();j++){      
                if (nums1[i]== nums2[j] ) {
                    idx=j;
                    break;
                }
            }
            for(int j=idx;j< nums2.size();j++){   
                if (nums1[i]< nums2[j] ) {
                    ans[i]=nums2[j];
                    break;
                    
                }
            }

        }
        return ans;
    }
};