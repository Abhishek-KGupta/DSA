class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26,0);
        int start=0, end=0, res=0, maxFreq=0;
        while(end<s.size())
        {
            count[s[end]-'A']++;
            maxFreq=max(maxFreq, count[s[end]-'A']);
            if((end-start+1)-maxFreq>k)
            {
                res=max(res, end-start);
                count[s[start]-'A']--;
                start++;
            }
            end++;
        }
    return max(res, end-start);
    }
};