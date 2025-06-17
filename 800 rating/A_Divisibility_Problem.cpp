#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int t;
    cin >>t;
    while(t--)
    {
        int a,b; 
        cin >>a>>b;
        
        if(a<b)
        {
            cout<<b-a<<endl;
        }
        else if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else if(a>b)
        {
            double num = (double) a/b;
            int round = ceil(num);
            int multi = round*b;
            cout<<multi-a<<endl;
        }
    }
    return 0;
}