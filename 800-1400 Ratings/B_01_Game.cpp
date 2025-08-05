#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cnt0 = 0;
    int cnt1 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1') cnt1++;
        else cnt0++;
    }
    if(s.size()==1) cout<<"NET\n";
    else if(cnt1 == 1 || cnt0 == 1)
    {
        cout<<"DA\n";
    }
    else if(cnt0 == s.size() || cnt1 == s.size())
    {
        cout<<"NET\n";
    }
    
    else
    {
        int mini = min(cnt0,cnt1);
        (mini%2==0) ? cout<<"NET\n":cout<<"DA\n";
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}