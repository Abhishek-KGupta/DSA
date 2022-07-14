class Solution {
public:
    bool isValid(string s) 
    {
        stack<int> st;
        for(auto x:s)
        {
            if(st.empty())
                st.push(x);
            else if((st.top()=='(' and x==')') or (st.top()=='{' and x=='}') or (st.top()=='[' and x==']'))
                st.pop();
            else
                st.push(x);
        }
        if(st.empty())
            return true;
        return false;
    }
};