#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int start=0, end=s.length()-1;
	while(start<end) {
		if (!isalnum(s[start])) start++;
		else if (!isalnum(s[end])) end--;
		else {
			if (tolower(s[start++])!=tolower(s[end--])) return false;
		}
	}
	return true;
    }
};


// "A man, a plan, a canal: Panama"
// "race a car"
// "   "
// "   a    "
// " a    a     "
// "a a"
// "a  a"
// "p  o p   "