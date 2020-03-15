#include <iostream>
using namespace std;
int main ()
{
	long long int n,m,a,a1,a2;
	cin>>n>>m>>a;
	if(n%a)
		a1=n/a+1;
	else
		a1=n/a;
	if(m%a)
		a2=m/a+1;
	else
		a2=m/a;

	cout<<a1*a2;
    return 0;
}

