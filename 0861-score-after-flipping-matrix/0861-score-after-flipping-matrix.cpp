class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols= grid[0].size();

        for (int i=0; i< rows; i++){
            if (grid[i][0]==0){
                for (int j=0; j< cols ; j++){
                    if (grid[i][j]==1) grid[i][j]=0;                        
                    else grid[i][j]=1;
                        
                }
            }
            
        }
         

        for (int j=0; j< cols ; j++){  
            int noo=0;
            int noz=0;  
            for (int i=0; i< rows; i++){
                    if (grid[i][j]==1) noo++;                       
                    else noz++;
                        
            }
            if(noz> noo){
                for (int i=0; i< rows; i++){
                    if (grid[i][j]==1) grid[i][j]=0;                        
                    else grid[i][j]=1;                       
                }
            }
        }
        int score=0;
        for (int i=0; i< rows; i++){
            int x=1;
            for (int j= cols-1; j>=0; j--){
                score+=grid[i][j]*x;
                x *= 2;

            }

        }
        return score;
    }                                                               
};