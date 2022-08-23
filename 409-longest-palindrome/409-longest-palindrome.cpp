class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int ,int> freq;
        int palin = 0;
        bool flag = false;
        
        for(auto it: s)
            freq[it]++;
        
        for(auto x: freq)
        {
            palin += (x.second / 2) * 2;
            if(flag == false and x.second % 2 != 0)
            {
                palin++;
                flag = true;
            }    
        }
        return palin;
    }
};