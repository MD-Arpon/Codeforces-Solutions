#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k; cin>>n>>k;
    vector<char>v(n);
    for(int i = 1;i<=n;i++)
    {
        cin>>v[i];
    }
    int cnt = 0;
    for(int i = 1;i<=n;i++)
    {
        if(v[i]== v[n-i+1]) cnt++;

    }
    //cout<<cnt<<endl;
    if(cnt>=k) cout<<"YES\n";
    else cout<<"NO\n";
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