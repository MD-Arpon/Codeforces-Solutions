#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    int cnt = 0;
    int suneet = 0;
    if(a1>b1) suneet++;
    if(a2>b2) suneet++;
    if(suneet>1) cnt++;

    suneet = 0;
    if(a1>b2) suneet++;
    if(a2>b1) suneet++;
    if(suneet>1) cnt++;

    // suneet = 0;
    // if(a2>b1) suneet++;
    // if(a1>b2) suneet++;
    // if(suneet>1) cnt++;

    // suneet = 0;
    // if(a2>b2) suneet++;
    // if(a1>b1) suneet++;
    // if(suneet>1) cnt++;

    cout<<cnt*2<<endl;
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