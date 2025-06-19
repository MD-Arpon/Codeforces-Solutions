#include <bits/stdc++.h>
using namespace std;
int main ()
{

    string s;
    cin>>s;
    cin.ignore();
    string ss;
    cin>>ss;
    char sss[s.size()];
    

    for(int i = 0;i<s.size();i++)
    {
        if(s[i]=='1' && ss[i]=='1' )
        {
            sss[i]='0';
        }
        else if (s[i]=='0' && ss[i]=='0' )
        {
            sss[i]='0';
        }
        else if (s[i]=='1' && ss[i]=='0' )
        {
            sss[i]='1';
        }
        else if (s[i]=='0' && ss[i]=='1' )
        {
            sss[i]='1';
        }
    }
    for(int i = 0;i<s.size();i++)
    {
        cout<<sss[i];
    }

    return 0;
}