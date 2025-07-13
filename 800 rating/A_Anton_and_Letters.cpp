#include <bits/stdc++.h>
using namespace std;
int main ()
{

    string s;
    getline(cin,s);
    //cout<<s;
    int fre[201] = {0};
    for(int i = 0;i<s.size();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            fre[s[i]]++;
        }
    }
    int cnt = 0;
    for(int i = 0;i<201;i++)
    {
        if(fre[i]>0)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}