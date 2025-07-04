#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    cin>>n;
    int x; 
    cin>>x;
    int xx[x];
    int fre[n+1] = {0};

    for(int i = 0;i<x;i++)
    {
        cin>>xx[i];
        fre[xx[i]]++;
        
    }

    int y; 
    cin>>y;
    int yy[y];
    
    for(int i = 0;i<y;i++)
    {
        cin>>yy[i];
        fre[yy[i]]++;
        
    }
    int cnt = 1;
    for(int i = 1;i<=n;i++)
    {
        if (fre[i]==0) cnt = 0;
    }
    (cnt==0) ? cout<<"Oh, my keyboard!":cout<<"I become the guy.";
    return 0;
}