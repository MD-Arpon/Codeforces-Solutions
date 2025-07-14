#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,q; cin>>n>>q;
    int a[n];
    int aa[n];
    
    for(int i = 1;i<=n;i++)
    {
        cin>>a[i];
        
    }
    aa[0] = 0;
    for(int i = 1;i<=n;i++)
    {
        aa[i] = aa[i-1] + a[i];
        
    }
    
    // for(int i = 1;i<=n;i++)
    // {
    //     cout<<aa[i]<<" ";
    // }
    while(q--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        int middle = (r-l+1) * k;
        int last = aa[n]-aa[r];
        int first = aa[l-1];
        int total = first + last + middle;
        //cout<<middle<<" ";
        //cout<<first<<" "<<middle<<" "<<last<<endl;
        (total%2==0) ? cout<<"NO\n" : cout<<"YES\n";


        

        

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
