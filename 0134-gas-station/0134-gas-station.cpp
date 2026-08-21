class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // choose pivot 

        int tank =0;
        int totalgas =0;
        int pivot= 0;

        for(int i=0;i < gas.size(); i++){
    
            int diff = gas[i] - cost[i];
            tank +=diff;
            totalgas+=diff;

            if(tank < 0){
                pivot=i+1;
                tank = 0;
            }
        }
        if(totalgas < 0 ) return -1;

        return pivot ;
    }
};