class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int arr[26]={0};
        int m=max(ransomNote.size(), magazine.size());
        for(int i=0;i<m;i++)
        {
            if(i<ransomNote.size())
                arr[ransomNote[i]-'a']++;
            if(i<magazine.size())
                arr[magazine[i]-'a']--;
        }
        for(int i=0;i<26;i++)
            if(arr[i]>0)
                return false;
    
        return true;
    }
};