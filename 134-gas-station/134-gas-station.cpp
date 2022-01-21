class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0;
        int res=0;
        if(accumulate(gas.begin(),gas.end(),0)<accumulate(cost.begin(),cost.end(),0))
        {
            return -1;
        }
        for(int i=0;i<gas.size();i++)
        {
            sum+=gas[i]-cost[i];
            if(sum<0)
            {
                sum=0;
                res=i+1;
            }
        }
        return res;
    }
};