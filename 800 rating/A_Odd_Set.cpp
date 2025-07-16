#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[2*n];
    int cnt = 0;
    for(int i = 0;i<2*n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            cnt++;
        }
    }
      
    cnt == n ? cout<<"Yes\n" : cout<<"No\n";

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