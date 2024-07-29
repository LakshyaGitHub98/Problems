#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	float x,y,z,av;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>x>>y>>z;
	    av=(x*y)/2;
	    if(av<z) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
    return 0;
}
