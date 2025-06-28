#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        char s[n];
        for(int i = 0;i<n;i++)
        {
            cin>>s[i];
        }
        int count = 0;
        
        if(s[0]!=s[n-1])
        {
            int fre[256] = {0};

        for(int i = 0;i<n;i++)
        {
            fre[s[i]]++;
        }
            for(int i = 0;i<256;i++)
        {
            if(fre[i]>0)
            {
                if(fre[i]>1)
                {
                cout<<"Yes\n";
                count = 1;
                break;
                } 
            }     
        }
        if(count==0)
            {
                cout<<"No\n";
            }
        } 
        else
        {
            int fre[256] = {0};

        for(int i = 1;i<n;i++)
        {
                fre[s[i]]++;
        }
        for(int i = 0;i<256;i++)
        {
            if(fre[i]>0)
            {
                if(fre[i]>1)
                {
                cout<<"Yes\n";
                count = 1;
                break;
                } 
            }     
        }
        if(count==0)
            {
                cout<<"No\n";
            }
        }  
    }
    return 0;
}