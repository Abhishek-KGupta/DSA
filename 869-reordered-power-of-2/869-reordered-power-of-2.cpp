class Solution {
public:
    bool reorderedPowerOf2(int n) {
       string x = to_string(n);
        sort(x.begin(), x.end());
        
        for(int i = 0; i <= 30; i++)
        {
            string check = to_string(1 << i);
            sort(check.begin(), check.end());
            if(check == x)
                return true;
        }
        return false;
    }
};