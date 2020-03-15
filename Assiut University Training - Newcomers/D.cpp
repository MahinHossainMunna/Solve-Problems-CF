/**

author:	©LoneWolfDON

**/
/*

*/
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int main()
{
    int  count0=0,count1=0,count2=0,count3=0;
    signed long int numbers[MAX];
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    for(int i=0;i<n;i++)
    {
        if(numbers[i] %2 == 0)
            count0++;
        else if(numbers[i] %2 != 0)
            count1++;
        if (numbers[i] > 0)
            count2++;
        else if(numbers[i] <0)
            count3++;
    }

    cout<<"Even: "<<count0<<endl;;
    cout<<"Odd: "<<count1<<endl;
    cout<<"Positive: "<<count2<<endl;
    cout<<"Negative: "<<count3<<endl;
}
