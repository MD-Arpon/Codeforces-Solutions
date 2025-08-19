#include <bits/stdc++.h>
using namespace std;
int main ()
{

    string s;
    cin>>s;
    int cnt0=0;
    int cnt0max = -123;
    int cnt1=0;
    int cnt1max = -123;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]=='0')
            {
                cnt0++;
                if(cnt0>cnt0max)
                {
                    cnt0max = cnt0;
                }
                if(cnt1>cnt1max)
                {
                    cnt1max = cnt1;
                }
                cnt1=0;
                
            }
        if(s[i]=='1')
            {
                cnt1++;
                if(cnt1>cnt1max)
                {
                    cnt1max = cnt1;
                }
                if(cnt0>cnt0max)
                {
                    cnt0max = cnt0;
                }
                cnt0=0;
            }

    }
   //cout<<cnt1max<<" "<<cnt0max<<endl;
    if(cnt0max>=7 || cnt1max>=7) cout<<"YES";
    else cout<<"NO";
    return 0;
}