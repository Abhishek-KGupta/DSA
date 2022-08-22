class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0)
            return false;
        
        int ones = 0, one_pos = 0, pos = 1;
        
        while(n)
        {
            if(n & 1)
            {
                ones++;
                one_pos = pos;
            }
            n>>=1;
            pos++;
        }
        return(ones == 1 and one_pos%2!=0);
    }
};