#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<long long int> v(n * k);
    for (int i = 0; i < n * k; i++)
        cin >> v[i];
    int pointer = n*k;
    long long int sum = 0;
    while(k--)
    {
        pointer-=n/2+1;
        sum+=v[pointer];

    }
    cout<<sum<<endl;
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