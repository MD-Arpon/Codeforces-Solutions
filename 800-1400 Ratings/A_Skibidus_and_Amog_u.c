#include <stdio.h>
#include <string.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        char ch[11];
        scanf("%s",ch);
        
        ch[strlen(ch)-2] = 'i';
        ch[strlen(ch)-1] = '\0';
        
         for(int i = 0;i<strlen(ch);i++)
        {
            printf("%c",ch[i]);
        }
        printf("\n");
        
    }
    return 0;
}
