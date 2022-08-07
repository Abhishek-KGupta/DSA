class Solution {
public:
    int countVowelPermutation(int n) {
        vector< vector < long  >> dp(n + 1, vector< long  > (5, 0));
        
        int mod = 1e9 + 7;
        int prev_a = 1, prev_i, prev_e = 1, prev_o = 1, prev_u = 1;
        
        for(int i = 0; i < 5; i++)
            dp[1][i] = 1;

        for(int i = 1; i < n; i++)
        {
            //0 = a, 1 = e, 2 = i, 3 = o, 4 = u 
        dp[i+1][0] = (dp[i][1] + dp[i][2] + dp[i][4]) % mod; // vowels that can be followed by 'a' 
        
        dp[i+1][1] = (dp[i][0] + dp[i][2]) % mod; // vowels that can be followed by 'e'
        
        dp[i+1][2] = (dp[i][1] + dp[i][3]) % mod;
        
        dp[i+1][3] = dp[i][2];
        
        dp[i+1][4] = (dp[i][2] + dp[i][3]) % mod;
        }
        
        int ans = 0;
        for(int i = 0; i < 5; i++)
            ans = ( ans + dp[n][i] ) % mod;
        return ans;
    }
};