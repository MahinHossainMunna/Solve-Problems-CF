/**

author:	©LoneWolfDON

**/
/*

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    cin>>a>>b;

    signed int tm1,tm2,result;

    tm1 = pow(a,b);
    tm2 = pow(b,a);
    result = tm1 - tm2;

    cout<<result<<endl;
}
