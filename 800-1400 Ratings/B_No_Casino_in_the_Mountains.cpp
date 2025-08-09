#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }

    int hikecnt = 0;
    int cnt = 0;
    for(int i = 0;i<v.size();i++)
    {
        if(v[i]==0)
        {
            cnt++;
            if(cnt==k)
            {
                hikecnt++;
                cnt = 0;
                i++;
            }
        }
        else
            cnt = 0;
    }
    cout<<hikecnt<<endl;
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