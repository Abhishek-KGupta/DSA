class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size() <= 0)
            return 0;
        sort(tokens.begin(), tokens.end());

        if(power < tokens[0])
            return 0;
        
        int i = 0, j = tokens.size() - 1;
        int score = 0, res = 0;
        
        while( i <= j)
        {
            if(power >= tokens[i])
            {
                power = power - tokens[i++];
                score++;
                res = max(res, score);
            }
            else
            {
                power = power + tokens[j--];
                score--;
            }
        }
        return res;
    }
};