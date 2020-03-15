/**

author:	©LoneWolfDON

**/
/*

*/
#include<bits/stdc++.h>
using namespace std;
list <int> mylist;
list <int>::iterator it;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int number;
        int elements, i;
        cin>>number;
        unsigned int length = 0;
        int temp;
        temp = number;
        do {
            ++length;
            temp /= 10;
            } while (temp != 0);

            int temp1 ;
        temp1 = number;

        for(i=0;i<length;i++)
        {

        elements = temp1%10;

        mylist.push_front(elements);

        temp1=temp1/10;

        }

        for(it = mylist.begin(),i=0;(it != mylist.end())&& i<length;it++,i++)
        {
            if(i<length-1)
                cout<<*it<<" ";
            else
                cout<<*it<<endl;
        }
        //cout<<endl;
        mylist.clear();

}
}
