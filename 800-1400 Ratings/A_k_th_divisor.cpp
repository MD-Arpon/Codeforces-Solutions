#include <bits/stdc++.h>
using namespace std;
int main ()
{

    long long int n,k; cin>>n>>k;
    vector<long long int>v;
    for(long long int i = 1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    auto it = unique(v.begin(),v.end());
    v.erase(it,v.end());
    
    if(v.size()>=k)
    {
        cout<<v[k-1];
    }
    else cout<<"-1";
    return 0;
}