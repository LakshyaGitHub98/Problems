#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    if((a+c)==180 and (b+d)==180)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
