class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0;

        for (int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
        }

        if (totalGas < totalCost) {
            return -1;
        }

        int pivot=0;
        int tank=0;
        
        for(int i=0;i < gas.size(); i++){
            int diff = gas[i] - cost[i];
            tank +=diff;

            if(tank < 0){
                pivot=i+1;
                tank = 0;
            }
        }
        return pivot ;
    }
};