#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    cin>>n;
    int cnt = 0;

    if(n>=5)
        {
            int nn = n/5;
            n%=5;
            cnt+=nn;
        }
    if(n==4)
        {
            int nn = n/4;
            n%=4;
            cnt+=nn;
        }
    if(n==3)
        {
            int nn = n/3;
            n%=3;
            cnt+=nn;
        }
    if(n==2)
        {
            int nn = n/2;
            n%=2;
            cnt+=nn;
        }
    if(n==1)
        {
            int nn = n/1;
            n%=1;
            cnt+=nn;
        }

    cout<<cnt;
    return 0;
}