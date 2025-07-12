#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    cin.ignore();
    reverse(s.begin(),s.end());

    for(int i =0;i<s.size();i++)
    {
        if(s[i]=='p')
        {
            cout<<"q";
        }
        if(s[i]=='q')
        {
            cout<<"p";
        }
        if(s[i]=='w')
        {
            cout<<"w";
        }
    
    }
    cout<<endl;
}
int main ()
{

    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}