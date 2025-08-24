#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ss;
    set<char>st;
    int total_string = 0;
    for(auto it:s)
    {
        st.insert(it);
        total_string+=st.size();
    }
    cout<<total_string<<endl;
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