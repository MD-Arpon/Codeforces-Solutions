#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    cin>>n;
    vector<int>v(n);
    int maxi = 0;
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        
        if(v[i]>maxi) 
        {
            maxi = v[i];
        }
        sum+=v[i];
    }

    int bosted = n*maxi;
    cout<<bosted-sum;
    return 0;
}