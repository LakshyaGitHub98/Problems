#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y,r,n;
	cin>>t; 
	while(t--)
	{
	    cin>>x>>y>>r;
	    n=(r/30)+x;
	    if(n%y==0)cout<<n/y<<endl;
	    else cout<<(n/y)+1<<endl;
	}
	return 0;
}
