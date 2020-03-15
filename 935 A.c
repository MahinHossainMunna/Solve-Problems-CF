#include <stdio.h>
#include <math.h>
int main ()
{
    int i,n;
    scanf("%d",&n);
    int l=0;
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0)
            l++;
    }
    printf("%d\n",l);
    return 0;
}
