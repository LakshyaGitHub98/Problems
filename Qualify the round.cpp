#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,a,b;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>x>>a>>b;
	    b=2*b;
	    if((a+b)>=x)cout<<"Qualify"<<endl;
	    else cout<<"NotQualify"<<endl;
	}
	return 0;
}
