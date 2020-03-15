#include <stdio.h>
#include <math.h>
int main ()
{
    int t,i;
    scanf("%d",&t);
    int x[t];
    double sum=0.0;
    for(i=0;i<t;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<t;i++)
    {
        sum+=x[i];
    }
    sum=sum/t;
    printf("%f\n",sum);
    return 0;
}
