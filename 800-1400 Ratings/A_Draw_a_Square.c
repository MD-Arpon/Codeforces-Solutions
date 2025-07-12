#include <stdio.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int l,r,d,u;
        scanf("%d %d %d %d",&l,&r,&d,&u);
        if(l==r && r==d&& d==u && l>=1 && r>=1 && d>=1 && u>=1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
