#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    if((n%2==0 && k%2==0)||(n%2==1 && k%2==1))
        cout<<"YES\n";
    else if(n%2==1 && k%2==0)
        cout<<"NO\n";
    else if(k==1)
        cout<<"YES\n";
    else if(n%2==0 && k%2==1)
        cout<<"YES\n";
    
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