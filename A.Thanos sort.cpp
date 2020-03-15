/**

author:	©LoneWolfDON

**/
/*

*/

#include<bits/stdc++.h>
using namespace std;
int n,a[100010],i,j;
int main()
{
for(cin>>n;i<n;i++)cin>>a[i];
for(i=n;i>0;i>>=1)
for(j=0;j<n;j+=i)
if(is_sorted(a+j,a+j+i)){cout<<i;return 0;}
}
