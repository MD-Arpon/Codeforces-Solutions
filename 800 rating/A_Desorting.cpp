#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int flag = 0;
    for(int i = 0;i<n-1;i++)
    {
        if(v[i]>v[i+1]) 
        {
            flag = 1;
        }
    }
    if(flag == 1) 
    {
        cout<<"0\n";
    }
    else
    {
        int diff = INT_MAX;
        for(int i = 0;i<n-1;i++)
        {
            if(v[i+1]-v[i]<diff) diff = v[i+1]-v[i];
        }
        cout<<((diff/2)+1)<<endl;
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