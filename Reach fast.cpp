#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,k;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>k;
	    if(abs(a-b)%k==0)cout<<abs(a-b)/k<<endl;
	    else cout<<(abs(a-b)/k)+1<<endl;
	}
	return 0;
}
