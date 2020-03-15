#include <stdio.h>
int main ()
{
    int n,s=0;
    scanf("%d",&n);
    if(n%2!=0)
        s=0;
    else if(n%4==0)
        s=(n/4)-1;
    else
        s=n/4;
    printf("%d\n",s);
    return 0;
}
