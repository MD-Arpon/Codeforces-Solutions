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
    int val;
    if(v[0]==v[1])
        val = v[0];
    if(v[0]==v[2])
        val = v[0];
    if(v[1]==v[2])
        val = v[1];
    int idx;
    for(int i = 0;i<n;i++)
    {
        if(v[i]!=val) idx = i;
    }
    cout<<idx+1<<endl;
    
    

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