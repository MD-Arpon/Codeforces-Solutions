#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,f,k; cin>>n>>f>>k;
    vector<int>v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    int target = v[f-1];
   
    sort(v.begin(),v.end(),greater<int>());
    ;
    int flag = 0;
    for(int i = k;i<n;i++)
    {
        if(v[i]==target) flag = 1;
    }
    for(int i = 0;i<k;i++)
    {
        if(v[i]==target) 
        {
            if(flag == 1) flag = 2;
        }
    }
    if(flag==0) cout<<"YES\n";
    if(flag==1) cout<<"NO\n";
    if(flag==2) cout<<"MAYBE\n";
    
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