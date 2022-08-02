class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bits = 0;
        while(n)
        {
            n=(n&(n-1));
            bits++;
        }
        return bits;
    }
};