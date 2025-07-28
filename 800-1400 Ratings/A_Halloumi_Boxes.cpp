#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> vv(v);
    int cnt = 0;
    sort(vv.begin(), vv.end());
    if (vv == v)
    {
        cout << "YES\n";
    }
    else if(v.size()==1) 
    {
        cout<<"YES\n";
    }
   
    else if (k==1)  
    {
        cout<<"NO\n";
    }
    else
    {
        {
        for (int i = 0; i < k - 1; i++)
        {

            if (v[i] > v[i + 1])
            {
                cnt++;
            }
        }

        (cnt <= k) ? cout << "YES\n" : cout << "NO\n";
        
    }
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}