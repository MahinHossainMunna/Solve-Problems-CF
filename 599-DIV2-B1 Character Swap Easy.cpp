/**

author:	©LoneWolfDON

**/
/*
Character Swap Easy Version
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int Test;
	cin >> Test;
	while(Test--){
		int n;
		cin >> n;
		string s1, s2;
		cin >> s1 >> s2;
		int t[2] = {};
		int k = 0;
		for(int i = 0; i < n; i++){
			if(s1[i] != s2[i]){
				t[k++] = i;
				if(k > 1) break;
			}
		}
		swap(s1[t[0]], s2[t[1]]);
		cout << (s1 == s2 ? "Yes" : "No") << endl;
	}
}
