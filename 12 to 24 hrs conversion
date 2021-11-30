#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string str="";
    if(s.substr(0,2)!="12")
    {
        if(s.substr(8,2)=="AM")
        {
            
            str=s.substr(0,8);
        }
        else 
        {
            int x=stoi(s.substr(0,2));
            x+=12;
            string s1=to_string(x);
            str=s1+s.substr(2,6);
        }
        
    }
    else if(s.substr(0,2)=="12"&&s.substr(8,2)=="AM")
    {
        str="00"+s.substr(2,6);
    }
    else if(s.substr(0,2)=="12"&&s.substr(8,2)=="PM")
    {
        str=s.substr(0,8);
    }
    return str;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
