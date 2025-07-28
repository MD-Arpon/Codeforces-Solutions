#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

    }
    int max_gap = 0;
    
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] - v[i - 1] > max_gap)
            {
                max_gap = v[i] - v[i - 1];
            }
        }

        int first_diff = v[0];
        int last_diff = 2*(x-v.back());
        cout << max(max_gap,max(last_diff,first_diff)) << endl;
    
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