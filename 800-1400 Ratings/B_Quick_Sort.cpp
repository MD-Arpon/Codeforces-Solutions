#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int cnt = 0;
    int want = 1;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==want) 
        {
            cnt++;
            want++;
        }
    }
    cout<<(n-want+k)/k<<endl;
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

