#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int nn[6];
        for(int i = 0;i<6;i++)
        {
            nn[i] = n%10;
            n/=10;
        }
        int firstsum = nn[0]+nn[1]+nn[2];
        int secondsum = nn[3]+nn[4]+nn[5];
        if(firstsum==secondsum)
        {
            cout<<"YES\n";
        }
        else 
        {
            cout<<"NO\n";
        }
    }
    return 0;
}