class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string>output(n,"0");
        int rank = 1;

        for(int i=0;i<n;i++) {

            int maxIdx = -1;
            int maxi = INT_MIN; 
            for(int j=0;j<n;j++){
                if(maxi<score[j]) {  
                    maxi=score[j];
                    maxIdx=j;
                    }

            }
            score[maxIdx]=-1*rank;
            rank++;

        }
        for(int i=0;i<n;i++){
            output[i]=to_string(-1*(score[i]));
        }

        for(int i =0;i< n;i++){
            if(output[i]=="1") output[i]="Gold Medal";
            else if(output[i]=="2") output[i]="Silver Medal";
            else if(output[i]=="3") output[i]="Bronze Medal";
            
        }
        return output;
    }
};