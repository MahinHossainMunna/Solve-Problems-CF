#include <bits/stdc++.h>
#include<cstdio>
using namespace std;
int main ()
{
    int t,i;
    cin>>t;
    long long int s,a,b,c;
    long long int m,n,o,r;
    while(t--)
    {
        cin>> s >> a >> b >> c;
        m=s/c;
        n=m/a;

        r=m+n*b;
        cout<< r<<endl;
    }
    return 0;
}
