#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++) cin>>v[i];

    vector<int>vv(v);
    sort(v.begin(),v.end());

    int op_ascendin =0;
    for(int i = 0;i<n;i++)
    {
        if((v[0]+v[v.size()-1])%2!=0)
        {
            op_ascendin++;
            v.pop_back();
        }
        if((v[0]+v[v.size()-1])%2==0) break;
    }


    int op_descendin =0;
    sort(vv.begin(),vv.end(),greater<>());
    for(int i = 0;i<n;i++)
    {
        if((vv[0]+vv[vv.size()-1])%2!=0)
        {
            op_descendin++;
            vv.pop_back();
        }
        if((vv[0]+vv[vv.size()-1])%2==0) break;
    }

    
    cout<<min(op_ascendin,op_descendin)<<endl;

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