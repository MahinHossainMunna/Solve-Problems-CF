#include <stdio.h>
#include <string.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        char s[20];
        scanf("%s",&s);
        if(s[0]=='T')
            sum+=4;
        else if(s[0]=='C')
            sum+=6;
        else if(s[0]=='O')
            sum+=8;
        else if(s[0]=='D')
            sum+=12;
        else if(s[0]=='I')
            sum+=20;
    }
    printf("%d\n",sum);
}
