#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int k,n,w;
    cin>>k>>n>>w;
    int cost = 0;
    for(int i = 1;i<=w;i++)
    {
        cost+=i*k;
    }
    (cost-n>=0)? cout<<cost-n : cout<<"0";
    return 0;
}