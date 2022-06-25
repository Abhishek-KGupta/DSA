#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int front=0, back=s.size()-1;
        while(front<=back)
        {
            if(!((s[front]>='a' and s[front]<='z') or (s[front]>='A' and s[front]<='Z') or (s[front]>='0' and s[front]<='9')))
                front++;
            if(!((s[back]>='a' and s[back]<='z') or (s[back]>='A' and s[back]<='Z') or(s[back]>='0' and s[back]<='9')))
                back--;
            if(((s[front]>='a' and s[front]<='z') or (s[front]>='A' and s[front]<='Z') or (s[front]>='0' and s[front]<='9')) and ((s[back]>='a' and s[back]<='z') or (s[back]>='A' and s[back]<='Z') or (s[back]>='0' and s[back]<='9')))
           
            {
                char c1=tolower(s[front]);
                char c2=tolower(s[back]);
                //cout<<c1<<"  "<<c2<<endl;
                if(c1!=c2)
                    return false;
               else 
               {
                   front++;
                   back--;
               }
            }
        }
        return true;
    }
};