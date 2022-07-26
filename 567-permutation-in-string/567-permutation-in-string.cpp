class Solution {
public:
    bool isSame(int arr1[], int arr2[])
    {
        for(int i=0;i<26;i++)
            if(arr1[i]!=arr2[i])
                return false;
        //cout<<"Ee"<<"\n";
        return true;
    }
    bool checkInclusion(string s2, string s1) {
        int arr1[26]={0};
        int arr2[26]={0};
        
        
        if(s2.size()>s1.size())
            return false;
        //cout<<s1<<"\n"<<s2<<"\n";
        
        
        for(int i=0;i<s2.size();i++)
        {
            arr1[s1[i]-'a']++;
            arr2[s2[i]-'a']++;
        }
        
        for(int i=s2.size();i<s1.size();i++)
        {
            if(isSame(arr1,arr2))
                return true;
            
            arr1[s1[i-s2.size()]-'a']--;
            arr1[s1[i]-'a']++;
        }
          if(isSame(arr1,arr2))
                return true;
        return false;
    }
};