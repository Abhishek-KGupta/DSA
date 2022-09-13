class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a = 0, b= 0, c = 0;
        
        for(int i = 2; i <= cost.size(); i++)
        {
            int oneStep = a + cost[i - 1];
            int twoStep = b + cost[i - 2];
            c = min(oneStep, twoStep);
            b = a;
            a = c;
        }
        return c;
    }
};