#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y,a,b,gold(0);
	cin>>t;
	while(t--)
	{
	    gold=0;
	    cin>>x>>y>>a>>b;
	    if(x!=a and x!=b)gold++;
	    if(y!=a and y!=b)gold++;
	    cout<<gold<<endl;
	}
	return 0;
}
