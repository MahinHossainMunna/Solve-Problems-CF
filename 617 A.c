#include <stdio.h>
int main ()
{
    int n,d=0;
    scanf("%d",&n);
    d+=n/5;
    n%=5;
    d+=n/4;
    n%=4;
    d+=n/3;
    n%=3;
    d+=n/2;
    n%=2;
    d+=n/1;
    n%=1;
    printf("%d\n",d);
    return 0;
}
