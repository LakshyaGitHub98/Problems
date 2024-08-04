#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,p,tm;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>p;
	    tm=(3*x)-(n-x);
	    if(tm>=p)cout<<"PASS\n";
	    else cout<<"FAIL\n";
	}
	return 0;
}
