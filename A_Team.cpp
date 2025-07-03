#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    cin>>n;
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        int innercnt = 0;
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1) innercnt++;
        if(b==1) innercnt++;
        if(c==1) innercnt++;
        if(innercnt>=2) count++;

    }
    cout<<count;
    return 0;
}