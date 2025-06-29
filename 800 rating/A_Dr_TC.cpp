#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    
    cin>>n;
    cin.ignore();
    char s[n];
    for(int i = 0;i<n;i++)
    {
        cin>>s[i];
    }
    
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        char ss[n];
        strcpy(ss,s);
        (ss[i]=='1') ? ss[i]='0' : ss[i]='1';
        for(int j = 0;j<n;j++)
        {
            if(ss[j]=='1')
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main ()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}