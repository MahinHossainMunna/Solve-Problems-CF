/**

author:	�LoneWolfDON

**/
/*

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        cout<<i<<endl;
        else if(N == 1)
        cout<<-1<<endl;
    }
}
