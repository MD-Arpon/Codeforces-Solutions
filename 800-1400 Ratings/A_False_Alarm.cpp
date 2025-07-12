#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        int cnt0 = 0;
        int cnt1 = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                cnt0++;
            }
            else cnt1++;
        }
        
        int ii = 0;
        for(int i = 0;i<n;i++)
        {
            if(a[i]==1)
            {
                ii = i + x;
                break;
            }
        }
        if(ii>=n) cout<<"YES\n";
        else 
        {
            int flag = 0;
            for(int i = ii;i<n;i++)
            {
                if(a[i]==1)
                {
                    flag = 1;
                    break;
                }
            }
            (flag == 1) ? cout<<"NO\n" : cout<<"YES\n";
        }   
    }
    return 0;
}