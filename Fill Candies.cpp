#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,m,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k>>m;
	    if((n%(k*m))==0)cout<<(n/(k*m))<<endl;
	    else cout<<((n/(k*m))+1)<<endl;
	}
	return 0;
}
