#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    int h;
    cin>>n>>h;
    vector<int>v(n);
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]<=h) sum+=1;
        else    sum+=2;
    }
    cout<<sum;
    return 0;
}