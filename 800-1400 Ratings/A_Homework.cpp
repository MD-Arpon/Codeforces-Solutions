#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string nn;
    cin>>nn;
    
    int m;
    cin>>m;
    string mm;
    cin>>mm;
    string s;
    cin>>s;
    
    stack<char>st;
    queue<char>qu;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]=='V') st.push(mm[i]);
        if(s[i]=='D') qu.push(mm[i]);
    }
    string str;
    while(!st.empty())
    {
        str.push_back(st.top());
        st.pop();
    }
    str+=nn;
    while(!qu.empty())
    {
        str.push_back(qu.front());
        qu.pop();
    }
    cout<<str<<endl;
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