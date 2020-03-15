/**

author:	©LoneWolfDON

**/
/*

*/
#include<bits/stdc++.h>
using namespace std;

int n,test,arr[1005];

int main (){
	cin>>test;
	while(test--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int side_length=0;
		for(int i=1;i<=n;i++){
			if(arr[n-i]>=i){
                side_length=max(i,side_length);
			}
		}
		cout<<side_length<<"\n";
	}
}
