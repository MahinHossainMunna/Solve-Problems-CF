/**

author:	©LoneWolfDON

**/
#include<bits/stdc++.h>
using namespace std;
vector <int> v;


int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);


    }
    int cnt = 0;
    sort(v.begin() , v.end());
    int d = 1;

    for(int i = 0 ; i < v.size(); i++) {
        if(v[i] >= d) {
            d++;
            cnt++;
        }

    }
    cout << cnt << endl;
}
