class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector <string> res;
        
        if(s.size() < 10)
            return res;
        
        unordered_map<string, int> freq;
        
        for(int i = 0; i < s.size() - 9; i++)
            freq[s.substr(i, 10)]++;
        
        for(auto x: freq)
            if(x.second > 1)
                res.push_back(x.first);
        return res;
    }
};