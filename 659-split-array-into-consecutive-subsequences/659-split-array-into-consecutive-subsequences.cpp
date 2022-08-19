class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map <int, int> freq;
        unordered_map <int, int> subseq;
        
        for(auto a: nums)
            freq[a]++;
        
        for(auto x: nums)
        {
            if(freq[x] <= 0)
                continue;
            
            freq[x]--;
            
            if(subseq[x - 1] > 0)
            {
                subseq[x - 1]--;
                subseq[x]++;
            }
            
            else if(freq[x + 1] and freq[x + 2] )
            {
                freq[x + 1]--;
                freq[x + 2]--;
                subseq[x + 2]++;
            }
            
            else
                return false;
        }
        return true;
    }
};