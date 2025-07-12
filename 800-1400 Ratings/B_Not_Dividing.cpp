#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    int cnt = 0;
    for(int i = 0;i<n-1;i++)
    {
        if(v[i]==1)
        {
            v[i]++;
            cnt++;
        }
    }
    int operation = n-1;
    for(int i = 0;i<n-1;i++)
    {
        if(v[i+1]%v[i]==0)
        {
            v[i+1]++;
            cnt++;
            
            // if(cnt==operation) 
            // {
            //     break;
            // }
        }
    }
    for(int i = 0;i<n;i++)
    {
        cout<<v[i]<<" ";
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