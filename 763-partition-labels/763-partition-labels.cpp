class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> pos(26, 0);
        vector<int> ans;
        int max_pos = 0, prev_pos = -1, p = 0;
        
        for(auto x: s)
            pos[x - 'a'] = p++;
        
        for(int i = 0; i < s.size(); i++)
        {
            max_pos = max(max_pos, pos[s[i] - 'a']);
            if(max_pos == i)
            {
                ans.push_back(max_pos - prev_pos);
                prev_pos = max_pos;
            }
        }
        return ans;
    }
};