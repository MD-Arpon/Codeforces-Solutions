#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    bool flag = false;
    int idxi;
    int idxj;
    int idxk;
    bool flagi = false;
    bool flagk = false;
    for (int j = 1; j < n - 1; j++)
    {
        
        int ith = v[j];
        int kth = v[j];
        for (int i = j - 1; i >= 0; i--)
        {
            if (v[i] < ith)
                ith = v[i], idxi = i, flagi = true;
        }
        for (int k = j + 1; k < n; k++)
        {
            if (v[k] < kth)
                kth = v[k], idxk = k, flagk = true;
        }
        idxj = j;
        if (flagi && flagk)
        {
            cout<<"YES\n";
            cout << idxi+1 <<" " << idxj+1 <<" " << idxk+1 <<endl;
            flag = true;
            break;
        }
        flagi = false;
        flagk = false;
    }
    if(flag==false) cout<<"NO\n";
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