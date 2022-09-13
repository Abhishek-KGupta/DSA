class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        sort(stones.begin(),stones.end(),greater<int>());
        
        for(int i = 0; i <n-1; i++){
            stones[i + 1] = stones[i] - stones[i + 1];
           sort(stones.begin(),stones.end(),greater<int>());
        }
        return stones[n-1];
    }
};