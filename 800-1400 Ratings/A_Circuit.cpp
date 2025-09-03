#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int>v;
    int cnt1 = 0; 
    int cnt0 = 0;
    for(int i = 0;i<2*n;i++)
    {
        int a; cin>>a;
        v.push_back(a);
        if(v[i]==0) cnt0++;
        else cnt1++;
    }
    int maxi = min(cnt0, cnt1);
    if(cnt1%2==0) cout<<0<<" ";
    else cout<<1<<" ";
    cout<<maxi<<endl;
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