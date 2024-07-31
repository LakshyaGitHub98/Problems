#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m,lr,nr,nb;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>m;
	    nr=n;
	    if(m>=n) lr=0;
	    else lr=n-m;
	    nb=nr+lr;
	    cout<<nb<<endl;
	}
	return 0;
}
