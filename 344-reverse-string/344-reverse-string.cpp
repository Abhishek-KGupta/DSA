class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1,i=0;
      for(;i<j;)
          swap(s[i++],s[j--]);
        // for(auto c:s)
        //   cout<<c;;
    }
};