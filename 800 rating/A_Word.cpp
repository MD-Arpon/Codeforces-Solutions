#include <bits/stdc++.h>
using namespace std;
int main ()
{

    string s; cin>>s;
    int lowercount = 0; int uppercount = 0;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            lowercount++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            uppercount++;
        }
    }
    if(lowercount>=uppercount)
    {
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
        }
    }
    else
    {
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
        }
    }
    

    cout<<s;
    return 0;
}