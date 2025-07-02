#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());


    if(n==1)
    {
        cout<<"0\n";
    }

    else 
    {
        int change_count = 0;
    int cnt = 1;
    for(int i = 1;i<n;i++)
    {
        if(v[i] - v[i-1] <= k) cnt++;
        else
        {    
            cnt = 1;
        }
        change_count = max(change_count,cnt);
    }
    cout<<n-change_count<<endl;
    }
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