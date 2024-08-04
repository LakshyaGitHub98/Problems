#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x%10==0)x=(x/10)-1;
	    else x=x/10;
	    if(y%10==0)y=(y/10)-1;
	    else y=y/10;
	    cout<<abs(x-y)<<endl;
	}
	return 0;
}
