class Solution {
public:
    void sum2(vector<vector<int>> &ans, vector<int> v, vector<int>candidates,int size, int target, int idx){
        
        if( target== 0){
            ans.push_back(v);
            return;
        }
        if( target<0 || idx== size){
            return;
        }
        int next = idx + 1;

        while(next < size && candidates[next] == candidates[idx])
            next++;

        sum2(ans, v, candidates,size, target, next);//dont take
        v.push_back(candidates[idx]);
        sum2(ans, v, candidates, size, target - candidates[idx], idx+1);//take

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());

        vector<int>v;
        sum2( ans, v,candidates,  candidates.size(), target, 0);
        return ans;

    }
};