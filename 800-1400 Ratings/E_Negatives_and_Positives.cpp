#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n; vector<int>v(n);
    long long sum = 0;
    int mini_num = INT_MAX;
    int neg_cnt=0;
    for(int i = 0;i<n;i++) 
    {
        cin>>v[i];
        if(v[i]<0) 
        {
            neg_cnt++;
            v[i] = -v[i];
        }
        sum+=v[i];
        if(v[i]<mini_num) mini_num = v[i];
    }

    (neg_cnt%2==0) ? cout<<sum<<endl:cout<<sum-(2*mini_num)<<endl;

    

    
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