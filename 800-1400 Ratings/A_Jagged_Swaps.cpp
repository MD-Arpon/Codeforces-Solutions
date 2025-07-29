#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int>a(n);

    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int>aa(a);
    sort(aa.begin(),aa.end());

    for(int i = 1;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[i]>a[j]) 
                swap(a[i],a[j]);
        }
    }
    (aa==a)?cout<<"YES\n":cout<<"NO\n";
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