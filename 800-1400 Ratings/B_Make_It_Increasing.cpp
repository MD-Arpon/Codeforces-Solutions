#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>vv(v);
    sort(v.begin(),v.end());
    vector<int>vvv(v);
    sort(vvv.begin(),vvv.end(),greater<int>());
    int cnt = 0;
    int flag = 0;
    for(int i = 0;i<n;i++)
    {
        if(v[i]!=vv[i])
        flag = 1;
    }
    
    if(flag == 0)
    {
        cout<<"0\n";
    }
    
    else
    {
        for(int i = n-1;i>=1;i--)
        {
            
                while(v[i-1]>=v[i])
                {
                    if(v[i-1]==0) break;
                    v[i-1] = v[i-1]/2;
                    cnt++;
                }
            
        }
        cout<<cnt<<endl;
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

