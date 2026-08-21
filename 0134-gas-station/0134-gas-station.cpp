class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;

        for (int i = 0; i < gas.size(); i++) {
            total += gas[i];
            total -= cost[i];
        }

        if (total < 0) {
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