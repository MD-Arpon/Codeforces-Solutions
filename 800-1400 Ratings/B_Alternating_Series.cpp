#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0;i<n-1;i++)
    {
        if(i%2==0)
        {
            v.push_back(-1);
        }
        else
        {
            v.push_back(3);
        }
    }
    if(n%2==0)
    {
        v.push_back(2);
    }
    else
    {
        v.push_back(-1);
    }
    for(int i = 0;i<n;i++)
    {
        cout<< v[i]<<" ";
    }
    cout << endl;  
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