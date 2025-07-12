#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(int i = 1;i<=n;i++)
    {
        cin>>v[i];
    }
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt5 = 0;
    int count_index = 0;
    int i = 1;
    while(i <=n && ((cnt0 <=3) || (cnt1 <=1 ) || (cnt2 <=2) || (cnt3 <=1) || (cnt5 <=1)))
    {
        if(v[i]==0 || v[i]==1 || v[i]==2 || v[i]==3 || v[i]==5) 
            {
                if(v[i]==0) cnt0++;
                if(v[i]==1) cnt1++;
                if(v[i]==2) cnt2++;
                if(v[i]==3) cnt3++;
                if(v[i]==5) cnt5++;
                count_index = i;
            }
        i++;
    }
    
    //cout<<i<<endl;
    // if((count_index == n)&& (v[n-1]==0 || v[n-1]==1 || v[n-1]==2 || v[n-1]==3 || v[n-1]==5))
    // {
        cout<<count_index<<endl;
    
   // else cout<<count_index+1<<endl;
    // for(int i = 0;i<n;i++)
    // {
    //     if(v[i]==0) cnt0++;
    //     if(v[i]==1) cnt1++;
    //     if(v[i]==2) cnt2++;
    //     if(v[i]==3) cnt3++;
    //     if(v[i]==5) cnt5++;
    // }
    // if(cnt0 >= 3 && cnt1 >= 1 && cnt2 >= 2 && cnt3 >= 1 && cnt5 >= 1)
    // {
    //     int cnt0 = 0;
    //     int cnt1 = 0;
    //     int cnt2 = 0;
    //     int cnt3 = 0;
    //     int cnt5 = 0;
    //     int count_index = 0;
    //     for(int i = 0;i<n;i++)
    //     {
    //         if(cnt0 == 3 && cnt1 == 1 && cnt2 == 2 && cnt3 == 1 && cnt5 == 1)
    //         {
    //             break;
    //         }
    //         if(v[i]==0 || v[i]==1 || v[i]==2 || v[i]==3 || v[i]==5) 
    //         {
    //             count_index = i;
    //             if(v[i]==0) cnt0++;
    //             if(v[i]==1) cnt1++;
    //             if(v[i]==2) cnt2++;
    //             if(v[i]==3) cnt3++;
    //             if(v[i]==5) cnt5++;

    //         }
    //     }
    //     cout<<count_index<<endl;
    // }
    // else cout<<"0\n";

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