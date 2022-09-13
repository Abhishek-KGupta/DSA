class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(auto x:s)
        {
            if(x!='#')
                st1.push(x);
            else if(!st1.empty())
                st1.pop();
        }
        for(auto it:t)
        {
            if(it!='#')
                st2.push(it);
            else if(!st2.empty())
                st2.pop();
        }
        if(st1.size()!=st2.size())
            return false;
        while(!st1.empty() or !st2.empty())
        {
            char s1=st1.top();
            char s2=st2.top();
            if(s1!=s2)
                return false;
            st1.pop();
            st2.pop();
        }
        return true;
    }
};