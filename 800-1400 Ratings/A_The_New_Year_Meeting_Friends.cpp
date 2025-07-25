#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int x,y,z;
    cin>>x>>y>>z;
    

    int maxi= max(x,max(y,z));
    int mini= min(x,min(y,z));
    if(x!=maxi && x!=mini)
    {
        cout<<abs(x-maxi)+abs(x-mini);
    }
    else if(y!=maxi && y!=mini)
    {
        cout<<abs(y-maxi)+abs(y-mini);
    }
    else
    {
        cout<<abs(z-maxi)+abs(z-mini);
    }
    return 0;
}