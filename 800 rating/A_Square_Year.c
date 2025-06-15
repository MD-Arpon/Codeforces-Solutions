#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        char a[5];
        scanf("%s",a);
        int test = 0;
        int test2 = 0;
        int aa = atoi(a);
        //printf("%d ",aa);
        for(int i = 0,j;i<100;i++)
        {

            
            for(int j = 0;j<100;j++)
            {
                int num = (i+j)*(i+j);
                if(num == aa && i<=j)
                {
                    printf("%d %d\n",i,j);  
                    test = 1;
                    test2 = 1;
                    break;    
                }
                if(test2 == 1)
                {
                    break;
                }
            }
              
                          
        }
        if(test == 0)
        {
            printf("-1\n");
        }
    }
    return 0;
}

