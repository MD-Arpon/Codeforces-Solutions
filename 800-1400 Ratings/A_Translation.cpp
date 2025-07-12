#include <bits/stdc++.h>
using namespace std;
int main ()
{

    string s; cin>>s;
    cin.ignore();
    string t; cin>>t;
    int count = 0;
    
    if(s.size()!=t.size())
    {
        cout<<"NO";
    }

    else
    {
        for(int i = 0,j=t.size()-1;i<s.size();i++,j--)
    {
        if(s[i]==t[j])
        {
           count++;
        }
    }
    (count==s.size()) ? cout<<"YES": cout<<"NO";
    }
    
    return 0;
}