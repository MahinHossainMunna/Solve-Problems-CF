#include <stdio.h>
int main ()
{
     int n,k,r,i;

    while (scanf ("%d %d",&n,&k) != EOF)
    {
        while (k--)
        {
            if (n == 0)
                break;

            r = n % 10;

            if (r == 0)
                n /= 10;
            else
                n--;
        }

        printf ("%d\n",n);
    }

    return 0;
}
