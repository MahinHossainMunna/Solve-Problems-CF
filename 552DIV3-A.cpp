#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b,c,d,x1,x2,x3,temp;
    cin>>a>>b>>c>>d;
     if (a < b){
    swap (b,a);
}

if (b < c){
    swap (c,b);
}

if (c < d){
    swap (d,c);
}

if (a < b){
    swap (b,a);
}

if (b < c){
    swap (c,b);
}

if (c < d){
    swap (d,c);
}


if (a < b){
    swap (b,a);
}

if (b < c){
    swap (c,b);
}

if (c < d){
    swap (d,c);
}

if (a < b){
    swap (b,a);
}

if (b < c){
    swap (c,b);
}

if (c < d){
    swap (d,c);
}
    x1=abs((d+c)-b)/2;
    x2=abs(d-x1);
    x3=abs(c-x1);

    cout<<x1<<" "<<x2<<" "<<x3<<endl;

}

