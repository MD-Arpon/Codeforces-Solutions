#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int flagmin = 0;
    int flagmax = 0;
    int mini = min(c,d);
    int maxi = max(c,d);

    int miniab = min(a,b);
    int maxiab = max(a,b);
    for(int i = miniab;i<=maxiab;i++)
    {
        if (mini==i)
        {
           flagmin = 1; 
        }
        if (maxi==i)
        {
           flagmax = 1; 
        }
    }
    if((flagmin == 1 && flagmax == 0 )|| (flagmin == 0 && flagmax == 1 )) 
    {
        cout<<"YES\n";
        //cout<<a<<b<<endl;
    }
    else //if((flagmin == 1 && flagmax == 1) && (flagmin == 0 && flagmax == 0))
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