#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int cnt1=0;
    for(char ss:s)
    {
        if(ss=='1') cnt1++;
    }
    cout<<cnt1<<endl;
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