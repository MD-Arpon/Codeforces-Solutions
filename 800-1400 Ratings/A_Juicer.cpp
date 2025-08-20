#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n,b,d;
    cin>>n>>b>>d;
    vector<int>v;
    while(n--)
    {
        int a;
        cin>>a;
        if(a<=b)
        {
            v.push_back(a);
        }
    }
    int waste = 0;
    int cnt = 0;
    for(int xx:v)
    {
        waste+=xx;
        if(waste>d)
        {
            cnt++;
            waste=0;
        }
    }
    cout<<cnt;
    return 0;
}