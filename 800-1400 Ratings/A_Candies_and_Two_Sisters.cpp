#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double n;
    cin>>n;
    if(n==1 || n == 2) cout<<"0\n";
    else
    {
        double res = n / 2;
        int ress = (int) n / 2;
        if(ress==res) cout<<ress-1<<endl;
        else cout<<ress<<endl;
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