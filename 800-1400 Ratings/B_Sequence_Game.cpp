#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>b(n);
    for(int i = 0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<int>a;
    // int cnt = n;
    // for(int i = 2;i<n;i++)
    // {
    //     if(v[i-1]>v[i]) cnt++;
    // }
    a.push_back(b[0]);
    for(int i = 1;i<n;i++)
    {
        if(b[i-1]<=b[i])
        {
            a.push_back(b[i]);
            
        }
        else 
        {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout<<a.size()<<endl;
    for(auto it:a)
    {
        cout<<it<<" ";
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