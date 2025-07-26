#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  

    long long int n;
    cin>>n;
    string s = to_string(n);
    

    
    
    bool flag = true;
    int cnt = 0;
    
    for(int i= 0;i<s.size();i++)
    {
        if(s[i]=='4' || s[i]=='7')
            cnt++;
    }
    
    
    

    (cnt==4 || cnt == 7) ? cout<<"YES":cout<<"NO";
    
    
    
    return 0;
}



