#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    cin>>n;
    cin.ignore();
    set<string>v;
    for(int i = 0;i<n;i++)
    {
        string s;
        getline(cin,s);
        v.insert(s);
    }
    cout<<v.size();
    return 0;
}