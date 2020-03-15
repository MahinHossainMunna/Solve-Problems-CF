/**

author:	©LoneWolfDON

**/
/*

*/
#include<bits/stdc++.h>

#define MAX 20000
using namespace std;
int arr[MAX];

int main()
{
    int testcase;

    cin>>testcase;

    while(testcase--)
    {
        int n;
        cin>>n;
        long long int sum=0;

        bool odd = false, even = false;
        for(int i =0 ; i<n; i++)
        {
            int a;
            cin>>a;

            sum+= a;

            odd |= a%2 !=0;
            even |= a%2 == 0;

        }
        if(sum%2!=0||(odd && even))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
