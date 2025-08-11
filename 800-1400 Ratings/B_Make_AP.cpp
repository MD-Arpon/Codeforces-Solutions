#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = false;
    if((2*b-c)%a==0)
    {
        if((2*b-c)/a>0)
            flag = true;
    }
    if((2*b-a)%c==0)
    {
        if((2*b-a)/c>0)
            flag = true;
    }
    if((a+c)%(2*b)==0)
        flag = true;

    if(flag == true) 
        cout<<"YES\n";
    else
        cout<<"NO\n";

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