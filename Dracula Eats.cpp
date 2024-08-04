#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n==1|| n==0)cout<<0<<endl;
	    else if(n<7)cout<<1<<endl;
	    else if((n%7)>1)cout<<((n/7)+1)<<endl;
	    else cout<<n/7<<endl;
	}
	return 0;
}
