// #include <bits/stdc++.h>
// using namespace std;
// int main ()
// {

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;cin>>n;
//         int a[n];
        
//         for(int i = 0;i<n;i++)
//         {
//             cin>>a[i];
//         } 
//         if(n==2)
//         {
//             if((a[0]%2==0 && a[1]%2==0) || (a[0]%2!=0 && a[1]%2!=0))
//             {
//                 cout<<"YES\n";
//             }
//             else
//             {
//                 cout<<"NO\n";
//             }
//         }
//         else
//         {
//         sort(a,a+n);
//         int presum[n];
//         presum[0] = a[0];
//         for(int i = 1;i<n;i++)
//         {
//             presum[i]=presum[i-1]+a[i];
//         }
        
//         int counteven = 0;
//         int countodd = 0;

//         for(int i = 0;i<n;i++)
//         {
//             if(presum[i]%2==0)
//             {
//                 counteven++;
//             }
//             if(presum[i]%2!=0)
//             {
//                 countodd++;
//             }
//         }
//         (counteven>=2 || countodd>=2) ? cout<<"YES\n" : cout<<"NO\n";
//         }
//         }
//     return 0;
// }


// 

#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        (sum%2==0) ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}

