#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int cnt = 0;
    if(a<b) cnt++;
    if(a<c) cnt++;
    if(a<d) cnt++;
    cout<<cnt<<endl;
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