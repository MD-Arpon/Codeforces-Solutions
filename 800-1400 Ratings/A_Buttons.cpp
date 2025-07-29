// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     long long int a,b,c; cin>>a>>b>>c;
//     int res = a+b+c;
//     if(res%2==0) cout<<"Second\n";
//     if(res%2==1) cout<<"First\n";
// }
// int main ()
// {

//     int t; cin>>t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"First\n";
         
    }
    else if(a>b)
    {
        cout<<"First\n";
    }
    else if(a<b)
    {
        cout<<"Second\n";
    }
    else if(b>a && b>c)
    {
        cout<<"Second\n";
        
    }
    else if(a==b && c%2==0)
    {
        cout<<"Second\n";
        
    }
    else if(a==b && c%2==1)
    {
        cout<<"First\n";
        
    }
}
int main ()
{

    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}