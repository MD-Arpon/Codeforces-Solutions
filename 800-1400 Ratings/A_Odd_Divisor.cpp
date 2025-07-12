#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin>>n;
    int cnt = 0;
    if(n%2!=0)
    {
        cout<<"YES\n";
    }
    else
    {
        int cnt = 0;
        long long int i;
        for( i = n;i>=3;)
        {
            if(n%i==0 && i %2 !=0)
            {
                cnt++;
                break;
            }
            i/=2;
        }
        if(cnt>0) cout<<"YES\n";
        else cout<<"NO\n";
    }

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

