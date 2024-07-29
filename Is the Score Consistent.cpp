#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b>>c>>d;
	    if(c>=a and d>=b)cout<<"POSSIBLE"<<endl;
	    else cout<<"IMPOSSIBLE"<<endl;
	}
    return 0;
}
