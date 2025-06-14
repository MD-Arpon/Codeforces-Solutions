#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    cin>>n;
    int antoncount=0;
    int danikcount = 0;
    for(int i = 0;i<n;i++)
    {
        char s;
        cin>>s;
        if(s=='A')
        {
            antoncount++;
        }
        else
        {
            danikcount++;
        }
    }
    if(antoncount>danikcount)
    {
        cout<<"Anton";
    }
    else if(antoncount<danikcount)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}