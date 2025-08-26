// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n; cin>>n;
//     char c; cin>>c;
   
//     string s; cin>>s;
//      if(c=='g') 
//     {
//         cout<<0<<endl;
//         return;
//     }
    
//     string ss = s+s;
//     int mx = 0;
//     int idxc=-1;
//     int idxg;
//     for(int i = 0;i<ss.size();i++)
//     {
//         if(ss[i]==c)
//         {
//             if(idxc==-1) idxc = i;
//         }
//         if(ss[i]=='g'  && idxc != -1)
//         {
//             idxg = i;
//             int time_sec = idxg - idxc;
//             mx=max(mx,time_sec);
//             idxc=-1;
//         }
//     }
//     cout<<mx<<endl; 

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

