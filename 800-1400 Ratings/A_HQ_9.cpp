#include <bits/stdc++.h>
using namespace std;
int main ()
{

    string s;
    cin>>s;
    bool flag = false;
    for(char ss:s)
    {
        if(ss=='H'||ss=='Q'||ss=='9')
            {
                flag = true;
                break;
            }
    }
    (flag==true) ? cout<<"YES":cout<<"NO";
    return 0;
}