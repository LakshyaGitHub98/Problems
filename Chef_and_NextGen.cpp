#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,x,y;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b>>x>>y;
	    if((a*b)<=(x*y))cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
    return 0;
}
