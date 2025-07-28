//Genuine Idea

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int nn = n-1;
    priority_queue<int>q;
    vector<pair<int,int>>v;

    for(int i = 1;i<=n;i++)
    {
        q.push(i);
    }

    while(nn--)
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        v.push_back({a,b});
        q.pop();
        int res = (a+b+1)/2;
        q.push(res);
    }
    
    cout<<q.top()<<endl;

    for(auto vv:v)
    {
        cout<<vv.first<<" "<<vv.second<<endl;
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


//Chorai idea
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int x = n;
    int y = n-1;
    cout<<"2"<<endl;
    cout<<x<<" "<<y<<endl;
    y--;
    int nn  = n-2;
    while(x>=3&&y>=1)
    {
        
        cout<<y<<" "<<x<<endl;

        x--;
        y--;
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