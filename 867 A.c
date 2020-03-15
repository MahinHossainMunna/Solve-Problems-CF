#include <stdio.h>
#include <string.h>
int main ()
{
    int i=0,n,cs=0,cf=0,l;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='S' && s[i+1]=='F')
            cs++;
        if(s[i]=='F' && s[i+1]=='S')
           cf++;
    }
    if(cs>cf)
        printf("YES\n");

    else
         printf("NO\n");
    return 0;
}
