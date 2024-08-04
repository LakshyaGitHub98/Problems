#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,a,b,tt;
	cin>>t;
	while(t--)
	{
	    tt=0;
	    cin>>n>>a>>b;
	    for(int i=1;i<=n;i++)
	    {
	        if(i%2==0)tt+=a;
	        else tt+=b;
	    }
	    cout<<tt<<endl;
	}
	return 0;
}
