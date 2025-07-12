#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    cin>>n;
    int div100=0;
    int div20 = 0;
    int div10 = 0;
    int div5 = 0;
    int div1 = 0;
    if(n>=100)
    {
        div100 = n/100;
        n%=100;
    }
    if(n>=20)
    {
        div20 = n/20;
        n%=20;
    }
    if(n>=10)
    {
        div10 = n/10;
        n%=10;
    }
    if(n>=5)
    {
        div5 = n/5;
        n%=5;
    }
    if(n>=1)
    {
        div1 = n/1;
    }
    cout<<div100+div20+div10+div5+div1;
    return 0;
}