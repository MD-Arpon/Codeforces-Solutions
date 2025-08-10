// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n,j,k;
//     cin>>n>>j>>k;

//     vector<int>v(n);
//     for(int i = 0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     int target = v[j-1];
//     set<int>s;
//     for(int i = 0;i<v.size();i++)
//     {
//         s.insert(v.back());
//         v.pop_back();
//     }
//     vector<int>vv;
//     for(auto it = s.begin();it!=s.end();it++)
//     {
//         vv.push_back(*it);
//     }
//     reserve(vv.begin(),vv.end(),)
// }
// int main ()
// {

//     int t; cin>>t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,j,k;
    cin>>n>>j>>k;
    vector<int>a(n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    if(k>=2) 
    {
        cout<<"YES\n";
        return;
    }
    int maxi = *max_element(a.begin(),a.end());
    if(a[j-1]==maxi) 
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

