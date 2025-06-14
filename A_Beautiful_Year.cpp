#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n; cin>>n;
    for(int i = n+1;i<=9999;i++)
    {
        
        int last = i%10;
        int rest = i/10;
        int sec_last = rest%10;
        rest = rest/10;
        int third_last = rest%10;
        rest = rest/10;
        
        //cout<<rest<<" "<<third_last<<" "<<sec_last<<" "<<last<<endl;
        if((last!=sec_last && last!=third_last && last!=rest) && (sec_last != third_last && sec_last!=last && sec_last!=rest )
        && (third_last != rest && third_last != last && third_last != sec_last) && (rest!=last && rest != sec_last && rest != third_last))
        {
            cout<<rest<<third_last<<sec_last<<last;
            break;
        }
    }
    return 0;
}