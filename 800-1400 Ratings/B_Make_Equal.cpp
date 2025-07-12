#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int a[n];
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    
    if(sum%n!=0)
    {
        cout<<"NO\n";
    }
    else
    {
        int flag = 0;
        sum /= n;
        for(int i = 0;i<n-1;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(a[i]>=sum)
                {

                }
                else flag = 1;
            }
        }
        (flag == 1)?cout<<"NO\n":cout<<"YES\n";

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