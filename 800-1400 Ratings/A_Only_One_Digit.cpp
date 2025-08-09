#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    while(n!=0)
    {
        int mod = n % 10;
        v.push_back(mod);
        n/=10;
    }
    int mini = 10000000;
    for(int i = 0;i<v.size();i++)
    {
        if(v[i]<mini)
            mini = v[i];
    }
    cout<<mini<<endl;
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