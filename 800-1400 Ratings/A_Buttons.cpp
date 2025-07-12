#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a,b,c; cin>>a>>b>>c;
    int res = a+b+c;
    if(res%2==0) cout<<"Second\n";
    if(res%2==1) cout<<"First\n";
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